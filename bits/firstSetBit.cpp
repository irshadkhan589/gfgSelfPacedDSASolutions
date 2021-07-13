#include<iostream>
#include<cmath>
using namespace std;
int firstSetBitNaive(int n){
    int count=0;
    while(!(n&1)){
        count++;
        n>>=1;
    }
    return count+1;
}
int firstSetBitOneLine(int n){
          return log2(n & -n) + 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<firstSetBitNaive(n)<<endl;
    cout<<firstSetBitOneLine(n)<<endl;
    return 0;
}