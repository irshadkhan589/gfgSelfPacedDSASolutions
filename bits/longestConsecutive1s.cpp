#include<iostream>
using namespace std;
int longest1s(int n){
    if (n==0)
    return 0;
    int count=0;
    while(n!=0){
        n&=n>>1;
        count++;
    }
        return count;
}
int main(){
    int n;
    cin>>n;
    cout<<longest1s(n)<<endl;
    return 0;
}