#include<iostream>
using namespace std;
void sortIntoWave(int a[], int n){
    for(int i=0;i<n-1;i+=2){
        if(a[i+1]>a[i]){
            swap(a[i],a[i+1]);
        }
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
    sortIntoWave(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}