#include<iostream>
using namespace std;
int binaryToGray(int n){
    return n^(n>>1);
}
 int grayToBinary(int n)
{
int binary=0;
for(;n;n=n>>1)
{
    binary^=n; //binary=binary^gray;
}
return binary;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToGray(n)<<endl;
    cout<<grayToBinary(n)<<endl;
    return 0;
}