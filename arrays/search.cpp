#include<iostream>
using namespace std;

int linearSearch(int arr[],int n, int x){
    int i = 0;
    for(i = 0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int x){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x){
            e=mid-1;
        }
        else
        s=mid+1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<linearSearch(a,n,key)<<endl;
    cout<<binarySearch(a,n,key)<<endl;
    return 0;
}