#include<iostream>
using namespace std;
void strongestNeighbour(int a[],int n){
    for(int i=0;i<n-1;i++){
        cout<<max(a[i],a[i+1])<<' ';
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    strongestNeighbour(a,n);
    return 0;
}