#include<iostream>
using namespace std;
int removeSameEle(int a[], int n){
    int m=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[m-1]){
            a[m]=a[i];
            m++;
        }
    }
    return m;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=removeSameEle(a,n);
    for(int i=0;i<m;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    cout<<m;
    cout<<endl;
    return 0;
}