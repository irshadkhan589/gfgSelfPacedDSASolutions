#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void getAllSets(string s, int ind, string curr,vector<string> &v){
 if(ind==s.length()){
     v.push_back(curr);
     return;
}
    getAllSets(s,ind+1,curr,v);
    getAllSets(s,ind+1,curr+s[ind],v);
}
vector<string> powerSet(string s){
    vector<string> v;
    getAllSets(s,0,"",v);
    return v;
}
int main(){
    string s;
    cin>>s;
    vector<string> v = powerSet(s);
    sort(v.begin(),v.end());
    for (auto x : v)
    {
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}