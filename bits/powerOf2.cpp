#include<iostream>
using namespace std;
bool isPowerOf2(int n){
   if(n==0){
       return false;
   }
   while(n!=1){
       if((n&1))
       return false;
       n>>=1;
   }
   return true;
}

bool brianKerningham(int n){
    if(n==0){
        return false;
    }
    int count=0;
    while(n!=0){
        n=n&n-1;
        count++;
    }
    if(count==1)
    return 1;
    else
    return 0;
}
bool brianKerninghamOneLine(int n){
    return (n!=0&&(n&n-1)==0);
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOf2(n)<<endl;
    cout<<brianKerningham(n)<<endl;
    cout<<brianKerninghamOneLine(n)<<endl;
    return 0;
}