#include<iostream>
using namespace std;
#define mod 1000000007
int reverse(int n){
    int reverse=0;
    int rem;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    return reverse;
}
long long modularExponentiation(int n, int r){
    if(r==1){
        return n;
    }
    long long num=modularExponentiation(n,r/2);
    num=(num*num) % mod;
    if(r%2==0){
        return num;
    }
    else
    return (num*n)%mod;
}
int main(){
    int n;
    cin>>n;
    int r=reverse(n);
    cout<<modularExponentiation(n,r)<<endl;
    return 0;
}