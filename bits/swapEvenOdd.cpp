#include<iostream>
using namespace std;
int swapEvenOdd(int n){
    int evenMask=0xAAAAAAAA;
    int oddMask=0x55555555;
    int temp=n;
    int evenPreserved=temp&evenMask;
    int oddPreserved=temp&oddMask;
    evenPreserved>>=1;
    oddPreserved<<=1;
    return (evenPreserved|oddPreserved);
}
int main(){
    int n;
    cin>>n;
    cout<<swapEvenOdd(n)<<endl;
    return 0;
}