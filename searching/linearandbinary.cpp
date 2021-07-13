#include<iostream>
using namespace std;
int linear(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int binary(int a[], int n, int key){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
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
    cout<<linear(a,n,key)<<endl;
    cout<<binary(a,n,key)<<endl;
    return 0;
}