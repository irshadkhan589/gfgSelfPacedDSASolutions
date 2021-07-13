#include<iostream>
using namespace std;
int sumON(int n){
    if(n<=1){
        return n;
    }
    return n+sumON(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumON(n)<<endl;
    return 0;
}