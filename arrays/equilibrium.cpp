#include<iostream>
using namespace std;
bool equilibriumONN(int a[], int n){
    for(int i=0;i<n;i++){
        int leftS=0;
        int rightS=0;
        for(int j=0;j<i;j++){
            leftS+=a[j];
        }
        for(int k=i+1;k<n;k++){
            rightS+=a[k];
        }
        if(leftS==rightS){
            return true;
        }
    }
    return false;
}
bool equilibriumON(int a[], int n){
    int sum=0;
    int lSum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        if(lSum==sum-a[i]){
            return true;
        }
        sum-=a[i];
        lSum+=a[i];
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<equilibriumONN(a,n)<<endl;
}