#include<iostream>
using namespace std;

void nBonacci(int a[], int n,int k){
    for(int i=0;i<k-1;i++){
        a[i]=0;
    }
    a[k-1]=1;
    int sumAti=0;
    for(int i=0;i<k;i++){
        sumAti+=a[i];
    }
    for(int i=k;i<n;i++){
        a[i]=sumAti;
        sumAti=sumAti-a[i-k]+a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}

int main()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
      a[i]=0;
  }
  nBonacci(a,n,k);
  return 0; 
} 
