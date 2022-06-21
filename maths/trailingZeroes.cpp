#include<iostream>
using namespace std;
int trailingZeroes(int num){
    int res =0;
    for(int i=5;i<=num;i*=5){
        res=res+num/i;
    }
    return res;
}
int main(){
    int num;
    cin>>num;
    cout<<trailingZeroes(num)<<endl;
    return 0;
}