#include<iostream>
using namespace std;
int maxPro(int a[], int n){
    int maxP =0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            maxP+=a[i]-a[i-1];
        }
    }
    return maxP;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxPro(a,n)<<endl;
}