#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str, int s ,int e){
    if(s>=e){
        return true;
    }
    return (str[s]==str[e])&&(isPalindrome(str,s+1,e-1));
}
int main(){
    string str;
    cin>>str;
    int start=0;
    int end=str.length()-1;
    cout<<isPalindrome(str,start,end)<<endl;
    return 0;
}