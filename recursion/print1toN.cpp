#include<iostream>
using namespace std;
void print1toN(int n){
    if(n==0){
        return;
    }
    print1toN(n-1);
    cout<<n<<' ';
}
void print1toNTail(int n, int k){
    if(n==0){
        return;
    }
    cout<<k+1<<' ';
    print1toNTail(n-1,k+1);
}
int main(){
    int n;
    int k=0; 
    cin>>n;
    print1toN(n);
    cout<<endl;
    print1toNTail(n,k);
    return 0;
}