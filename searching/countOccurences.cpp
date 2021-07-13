#include<iostream>
using namespace std;
int countOccurencesLinear(int a[], int n, int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }   
    }
    return count;
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
int lastOccurenceBinary(int a[], int n, int key, int low, int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            if(mid==n-1||a[mid+1]!=a[mid]){
                return mid;
            }
            else
            low=mid+1;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return -1;
}
int countOccurencesBinary(int a[], int n, int key){
    int first= firstOccurenceBinary(a,n,0,n-1,key);
    if(first==-1){
        return 0;
    }
    int number = lastOccurenceBinary(a,n,key,0,n-1) - first +1;
    return number;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countOccurencesLinear(a,n,key)<<endl;
    cout<<countOccurencesBinary(a,n,key)<<endl;
    return 0;
}