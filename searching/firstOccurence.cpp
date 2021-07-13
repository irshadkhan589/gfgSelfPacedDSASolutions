#include<iostream>
using namespace std;
int firstOccurenceLinear(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int firstOccurenceBinary(int a[], int n, int low, int high, int key){
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
          if(mid==0||a[mid-1]!=a[mid]){
              return mid;
          }
          else 
          high=mid-1;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<firstOccurenceLinear(a,n,key)<<endl;
    cout<<firstOccurenceBinary(a,n,0,n-1,key)<<endl;
    return 0;

}