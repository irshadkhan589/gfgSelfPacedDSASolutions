#include<iostream>
#include<string>
using namespace std;
void permutations(string s,string asf){
    if(s.length()==0){
        cout<<asf<<' ';
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s.at(i);
        string qlpart=s.substr(0,i);
        string qrpart=s.substr(i+1,s.length());
        string roq=qlpart+qrpart;
        permutations(roq,asf+ch);
    }
}
int main(){
    string s;
    cin>>s;
    permutations(s,"");
    string r="irshad";
    char c='i';
    cout<<r+c;
    return 0;
}