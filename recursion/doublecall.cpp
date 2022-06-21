//refer to doublecall.png(n=3) image for better understanding
#include<iostream>
using namespace std;
void doublecall(int n){
    //base case
    if(n==0){
        return;
    }
    //pre statements
    cout<<"pre"<<n<<' ';
    //left call
    doublecall(n-1);
    //in statements
    cout<<"in"<<n<<' ';
    //right call
    doublecall(n-1);
    //post statements
    cout<<"post"<<n<<' ';
}
int main(){
    int n;
    cin>>n;
    doublecall(n);
    return 0;
}