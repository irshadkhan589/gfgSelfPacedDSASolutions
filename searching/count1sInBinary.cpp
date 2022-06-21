#include<iostream>
using namespace std;

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
int count1sInBinary(int a[], int n){
    int last=n-1;
    int first = firstOccurenceBinary(a,n,0,n-1,1);
    if(first==-1){
        return 0;
    }
    return last - first + 1 ;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<count1sInBinary(a,n)<<endl;
    return 0;
}