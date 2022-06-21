#include<iostream>
using namespace std;


int maxSubONN(int a[], int n){
    int maxSum=a[0];
    int sum=0;
    for(int i=0;i<n;i++){
            sum=0;
    for(int j=i;j<n;j++){
        sum+=a[j];
        maxSum=max(sum,maxSum);
    }
    }
    return maxSum;
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


int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<maxSubONN(a,n)<<endl;
    cout<<maxSubON(a,n)<<endl;
    return 0;
}
