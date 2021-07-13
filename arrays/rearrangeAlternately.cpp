#include<iostream>
using namespace std;
void rearrange(int a[], int n){
 int minIdx=0;
 int maxIdx=n-1;
 int maxEle=a[n-1]+1;
 for(int i=0;i<n;i++){
     if(i%2==0){
         a[i]+=(a[maxIdx]%maxEle)*maxEle;
         maxIdx--;
     }
     else{
         a[i]+=(a[minIdx]%maxEle)*maxEle;
         minIdx++;
     }
 }
 for(int i=0;i<n;i++){
     a[i]/=maxEle;
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
    rearrange(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}