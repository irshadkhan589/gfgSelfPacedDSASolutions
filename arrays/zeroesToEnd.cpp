#include<iostream>
using namespace std;
void zeroesToEnd(int a[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(a[start]==0){
            swap(a[start],a[end]);
            end--;
        }
        else
        start++;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    zeroesToEnd(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}