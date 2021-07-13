#include<iostream>
using namespace std;
int oddOccuringNaive(int a[], int n){
    for(int i=0;i<=n-1;i++){
        int count=0;
        for(int j=0;j<=n-1;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count%2!=0){
            return a[i];
        }
    }
    return 0;
}
int oddOccuringXOR(int a[],int n){
    int result =0;
    for(int i=0;i<=n-1;i++){
        result^=a[i];
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<oddOccuringNaive(a,n)<<endl;
    cout<<oddOccuringXOR(a,n)<<endl;
}