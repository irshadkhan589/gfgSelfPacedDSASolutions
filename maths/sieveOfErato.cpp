#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2||n==3){
        return true;
    }
    if(n%2==0||n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0){
            return false;
        }
    }
    return true;
}
void allPrimeNaive(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<' ';
        }
    }
    cout<<endl;
}

void seiveOfErato(int n){
    bool isPrime[n+1]={0};
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=true;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]==0){
            cout<<i<<' ';
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    allPrimeNaive(n);
    seiveOfErato(n);
    return 0;
}