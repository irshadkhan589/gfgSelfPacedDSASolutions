#include<iostream>
using namespace std;
int insertion(int a[], int cap, int n, int key, int i){
    if(cap==n){
        return n;
    }
    for(int j=n-1;j>=i;j--){
        a[j+1]=a[j];
    }
    a[i]=key;
    return n+1;
}
int main(){
    int cap;
    cin>>cap;
    int n,key,id;
    cin>>n>>key>>id;
    int a[cap]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    n=insertion(a,cap,n,key,id);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}