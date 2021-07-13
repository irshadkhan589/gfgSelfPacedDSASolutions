#include<iostream>
#include<string>
using namespace std;
void subsets(string str,string curr,int index){
    if(index==str.length()){
        cout<<curr<<' ';
        return;
    }
    	subsets(str, curr, index + 1);
	subsets(str, curr+str[index], index + 1);
}
int main(){
    string str;
    cin>>str;
    subsets(str,"",0);
    cout<<endl;
    return 0;
}