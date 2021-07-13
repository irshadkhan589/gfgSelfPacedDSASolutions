#include<iostream>
using namespace std;
bool kthBitSetRShift(int n, int k){
    if((n>>k-1)&1){
        return true;
    }
    else
    return false;
}
bool kthBitSetLShift(int n, int k){
    if(n&(1<<k-1)){
        return true;
    }
    else
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<kthBitSetRShift(n,k)<<endl;
    cout<<kthBitSetLShift(n,k)<<endl;
    return 0;
}