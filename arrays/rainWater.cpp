#include<iostream>
using namespace std;
int rainWaterONN(int a[], int n){
    int lmax,rmax;
    int water=0;
    for(int i=1;i<n-1;i++){
        int lmax=a[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax, a[j]);
        }
        int rmax=a[i];
        for(int j=i;j<n;j++){
            rmax=max(rmax, a[j]);
        }
        water+=min(lmax,rmax)-a[i];
    }
    return water;
}
int rainWaterON(int a[], int n){
    int lmax[n];
    int rmax[n];
    int water=0;
    lmax[0]=a[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(a[i],lmax[i-1]);
    }
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>0;i--){
        rmax[i]=max(a[i],rmax[i+1]);
    }
    for(int i=0;i<n;i++){
        water+=min(lmax[i],rmax[i])-a[i];
    }
    return water;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<rainWaterONN(a,n)<<endl;
    cout<<rainWaterON(a,n)<<endl;
    return 0;
}