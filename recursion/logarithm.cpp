#include<iostream>
using namespace std;
int logarithm(int n){
    if(n==1){
        return 0;
    }
    else
    return 1+ logarithm(n/2);
}
int main(){
    int n;
    cin>>n;
    cout<<logarithm(n)<<endl;
    return 0;
}