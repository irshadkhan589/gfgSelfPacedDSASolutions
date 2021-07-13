#include<iostream>
using namespace std;
int noOfDigits(int num){
    int count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    cout<<noOfDigits(num)<<endl;
    return 0;
}