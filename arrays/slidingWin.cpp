#include<iostream>
#include<climits>
using namespace std;
int slideNaive(int a[], int n, int k){
    int maxSum=INT_MIN;
    int sumAti=0;
    for(int i=0;i<n-k+1;i++){
        sumAti=0;
        for(int j=i;j<i+k;j++){
            sumAti+=a[j];
        maxSum=max(sumAti,maxSum);
        }
    }
    return maxSum;
}
int slideON(int a[], int n, int k){
  int maxSum=INT_MIN;
  int sumAti=0;
  for(int i=0;i<k;i++){
      sumAti+=a[i];
      maxSum=max(maxSum,sumAti);
  }
  for(int i=1;i<n-k+1;i++){
      sumAti+=a[i+k-1]-a[i-1];
      maxSum=max(maxSum,sumAti);
  }
  return maxSum;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<slideNaive(a,n,k)<<endl;
    cout<<slideON(a,n,k)<<endl;
    return 0;
}