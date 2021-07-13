#include<iostream>
using namespace std;
int maxindexDiff(int a[], int n){
    int Lmin[n];
    int Rmax[n];
    Lmin[0]=a[0];
    for(int i=1;i<n;i++){
        Lmin[i]=min(Lmin[i-1],a[i]);
    }
    Rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        Rmax[i]=max(Rmax[i+1],a[i]);
    }
    int i=0;
    int j=0;
    int maxDiff=-1;
    while(i<n&&j<n){
        if(Rmax[j]>Lmin[i]){
            maxDiff=max(maxDiff,j-i);
            j++;
        }
        else
        i++;
    }
    return maxDiff;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxindexDiff(a,n)<<endl;
    return 0;
}
