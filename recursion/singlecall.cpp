// This program demonstrates the working of a recursion with a single call inside  the function 
#include<iostream>
using namespace std;
void singlecall(int n){
    //base case
    if(n==0)
    {
        return;
    }
    //statement(s) before call
    cout<<n<<"pre call"<<endl;
    //the statement gets printed first for n and then for n-1 and then so on upto base case and functions are getting pushed inside call stack one by one from n to base case
    singlecall(n-1);
    //statement(s) after call
    cout<<n<<"post call"<<endl;
    //the statement gets printed first for just after base case then next and upto n and functions are getting popped one by one till nothing is left in stack
}
int main(){
    int n;
    cin>>n;
    singlecall(n);
    return 0;
}