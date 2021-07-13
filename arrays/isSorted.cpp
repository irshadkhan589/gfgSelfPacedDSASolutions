#include<iostream>
using namespace std;
bool isSorted(int a[], int n){
    for(int i=0;i<n;i++){
        if(a[i+1]<a[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<isSorted(a,n)<<endl;
    return 0;
}