#include<iostream>
#include<cmath>
using namespace std;
 int maximumPowerOf2(int n){
    int x=0;
    int count=0;
    while((1<<x)<=n){
        x++;
        count++;
    }
    return count-1;
}
int countSetBits(int n){
    if(n==0){
        return 0;
    }
    int x=maximumPowerOf2(n);
    int a= (1<<x-1)*x;
    int b=n-(1<<x)+1;
    int c=n-(1<<x);
    return a+b+countSetBits(c);
    return x;
}
int main(){
    int n;
    cin>>n;
    cout<<countSetBits(n)<<endl;
    return 0;
}