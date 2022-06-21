#include<iostream>
using namespace std;
 bool isSparse(int n)
    {
        return !(n&(n>>1));
    }
int main(){
    int n;
    cin>>n;
    cout<<isSparse(n)<<endl;
}