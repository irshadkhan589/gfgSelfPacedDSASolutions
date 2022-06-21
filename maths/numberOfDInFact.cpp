#include<iostream>
#include<cmath>
using namespace std;
int numberOfDInFactNaive(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    double digits=0;
    for(int i=2;i<=n;i++){
        digits+=log10(i);
    }
    return floor(digits)+1;
}

//Optimised Approach Using Kamenetsky's Formula
//f(x) =    log10( ((n/e)^n) * sqrt(2*pi*n))
int kamenetsky(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    double x = ((n * log10(n / M_E) +
                 log10(2 * M_PI * n) /
                 2.0));
    return floor(x)+1;    
}

int main(){
    int n;
    cin>>n;
    cout<<numberOfDInFactNaive(n)<<endl;
    cout<<kamenetsky(n)<<endl;
}