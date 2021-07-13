#include<iostream>
using namespace std;
int missingNumber(int a[],int n){
    int res1=0;
    for(int i=1;i<=n;i++){
        res1^=i;
    }
    int res2=0;
    for(int i=0;i<n-1;i++){
        res2^=a[i];
    }
    int num=res1^res2;
    return num;
}
int main(){
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    cout<<missingNumber(a,n)<<endl;
    return 0;
}