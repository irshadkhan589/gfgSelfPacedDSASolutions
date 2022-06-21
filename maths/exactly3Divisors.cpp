#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n==0||n==1){
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
int exactly3Divisors(int number){
    int count =0;
    for(int i=2;i*i<=number;i++){
        if(isPrime(i)&&(pow(i,2)<=number)){
            count++;
        }
    }
    return count;
}

int main(){
    int number;
    cin>>number;
    cout<<exactly3Divisors(number)<<endl;
    return 0;
}