#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num==1){
        return false;
    }
    if(num==2 || num==3){
        return true;
    }
    if(num%2==0 || num%3==0){
        return false;
    }
    for(int i=5;i*i<=num;i+=6){
        if(num%i==0||(num%(i+2)==0))
        return false;
    }
    return true;
}
void primeFactorsNaive(int num){
    for(int i=2;i<=num;i++){
        int x=i;
        if(isPrime(i)){
            while(num%x==0){
                cout<<i<<' ';
                x*=i;
            }
        }
    }
    cout<<endl;
}
void primeFactorsOptimised(int n){
    if(n<=1)
    return;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<' ';
            n/=i;
        }
    }
    if(n>1)
    cout<<n;
    cout<<endl;
}
void primeFactorsORootN(int n){
    if(n<=1)
    return;
    while(n%2==0){
        cout<<2<<' ';
        n/=2;
    }
    while(n%3==0){
        cout<<3<<' ';
        n/=3;
    }
    for(int i=5;i*i<=n;i+=6){
        while(n%i==0){
            cout<<i<<' ';
            n/=i;
        }
        while(n%i+2==0){
            cout<<i+2<<' ';
            n/=i+2;
        }
    }
    if(n>3)
    cout<<n<<endl;
}
int main(){
    int num;
    cin>>num;
    primeFactorsNaive(num);
    primeFactorsOptimised(num);
    primeFactorsORootN(num);
}