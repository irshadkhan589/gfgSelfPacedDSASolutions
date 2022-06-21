#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void powerSet(string s){
    int counter=pow(2,s.length());
    int length=s.length();
    for(int i=0;i<counter;i++){
        for(int j=0;j<length;j++){
            if((i>>j)&(1)){
                cout<<s[j];
            }
        }
        cout<<'\t';
    }
}
int main(){
    string s;
    cin>>s;
    powerSet(s);
    return 0;
}
