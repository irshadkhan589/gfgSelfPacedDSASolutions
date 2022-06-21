#include<iostream>
using namespace std;
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
int main(){
    int n, key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lastOccurenceBinary(a,n,key,0,n-1);
    return 0;
}