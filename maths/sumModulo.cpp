#include<iostream>
using namespace std;
    long long sumUnderModulo(long long a,long long b)
    {
        //( a + b) % m = ( ( a % m ) + ( b % m ) ) % m
        long long modulo = ((a%1000000007)+(b%1000000007))%1000000007;
        return modulo;
    }
    long long productUnderModulo(long long a,long long b)
    {
        //( a * b) % m = ( ( a % m ) * ( b % m ) ) % m
        long long modulo = ((a%1000000007)*(b%1000000007))%1000000007;
        return modulo;
    }
    
    int main(){
        long long a,b;
        cin>>a>>b;
        cout<<sumUnderModulo(a,b)<<endl;
        cout<<productUnderModulo(a,b)<<endl;
        return 0;
    }