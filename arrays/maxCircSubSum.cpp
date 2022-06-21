#include<iostream>
using namespace std;
int maxSumONN(int a[], int n){
    int result=a[0];
    for(int i=0;i<n;i++){
        int currSum=a[i];
        int currMax=a[i];
        for(int j=1;j<n;j++){
            currSum+=a[(i+j)%n];
            currMax=max(currMax,currSum);
        }
        result=max(currMax,result);
    }
    return result;
}
int maxSubON(int a[], int n){
    int maxSum=a[0];
    int result=a[0];
    for(int i=1;i<n;i++){
        maxSum=max(maxSum+a[i],a[i]);
        result=max(maxSum,result);
    }
    return result;
}
int maxSumON(int a[],int n){
    int maxKadane= maxSubON(a,n);
    if(maxKadane<0){
        return maxKadane;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum+=a[i];
        a[i]=-a[i];
    }
    int maxCircular=arr_sum+maxKadane;
    int result=max(maxKadane,maxCircular);
    return result;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxSumONN(a,n)<<endl;
    cout<<maxSumON(a,n)<<endl;
    return 0;
}