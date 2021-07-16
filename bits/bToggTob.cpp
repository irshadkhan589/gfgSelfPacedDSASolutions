#include<iostream>
using namespace std;
int binaryToGray(int n){
    return n^(n>>1);
}
  int grayToBinary(int n)
{

int num = n;

while (n>=1){
n=n>>1;
num = (num^n);

}
return num;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToGray(n)<<endl;
    cout<<grayToBinary(n)<<endl;
    return 0;
}