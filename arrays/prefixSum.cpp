#include<iostream>
using namespace std;
int prefixSumNaive(int a[], int n, int l, int r){
    int sumUptoL=a[0];
    for(int i=1;i<l;i++){
    sumUptoL+=a[i];
    }
    int sumUptoR=a[0];
    for(int i=1;i<=r;i++){
    sumUptoR+=a[i];
    }
    return sumUptoR-sumUptoL+a[l];
}
int prefixSum(int a[], int n, int l , int r){
    int prefi[n];
    prefi[0]=a[0];
    for(int i=1;i<n;i++){
        prefi[i]=prefi[i-1]+a[i];
    }
    return 
}
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<prefixSumNaive(a,n,l,r)<<endl;
    cout<<prefixSum(a,n,l,r)<<endl;
    return 0;
}