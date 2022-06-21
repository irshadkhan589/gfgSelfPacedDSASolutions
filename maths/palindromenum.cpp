#include<iostream>
using namespace std;
bool palindromeNum(int num){
    int temp=num;
    int digit;
    int rev=0;
    while(temp!=0){
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    return rev==num;
}
int main(){
    int num;
    cin>>num;
    cout<<palindromeNum(num)<<endl;
}