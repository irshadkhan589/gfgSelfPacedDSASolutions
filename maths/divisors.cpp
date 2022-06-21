#include<iostream>
using namespace std;
void divisorsNaive(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<' ';
        }
    }
    cout<<endl;
}
void divisorsORootN(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i!=n/i)
                cout<<i<<' '<<n/i<<' ';
            else
            cout<<i<<' ';
        }
    }
    cout<<endl;
}
void divisorsORootNSorted(int n){
    int i=1;
    for(i=1;i*i<n;i++){
        if(n%i==0){
                cout<<i<<' ';
        }
    }
    for(;i>0;i--){
        if(n%i==0){
            cout<<n/i<<' ';
        }
    }
    cout<<endl;
}
int main(){
    int num;
    cin>>num;
    divisorsNaive(num);
    divisorsORootN(num);
    divisorsORootNSorted(num);
    return 0;
}