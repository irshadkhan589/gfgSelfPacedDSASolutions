#include<iostream>
using namespace std;
int binaryRecursive(int a[], int n, int key,int start, int end){
    if(end<start){
        return -1;
    }
    int mid=(start+end)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        return binaryRecursive(a,n,key,start,mid-1);
    }
    else
    return binaryRecursive(a,n,key,mid+1,end);
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<binaryRecursive(a,n,key, 0, n-1)<<endl;
    return 0;
}