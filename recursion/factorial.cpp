#include<iostream>
using namespace std;
int factorialNonTail(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factorialNonTail(n-1);
}
int factorialTail(int n,int k){
    if(n==0||n==1){
        return 1;
    }
    return factorialTail(n-1,k*n);
}
int main(){
    int n;
    int k=1;
    cin>>n;
    cout<<factorialNonTail(n);
    cout<<endl;
    cout<<factorialTail(n,k);
    cout<<endl;
    return 0;
}