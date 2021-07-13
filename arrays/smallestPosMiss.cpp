#include<iostream>
using namespace std;
int smallestONO1(int a[], int n){
    for(int i=0;i<n;i++){
        while((a[i]>0&&a[i]<=n)&&a[i]!=a[a[i]-1]){
            swap(a[i],a[a[i]-1]);
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            return i+1;
        }
    }
    return n+1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<smallestONO1(a,n)<<endl;
    return 0;
}