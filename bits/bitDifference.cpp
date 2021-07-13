#include<iostream>
using namespace std;
int brianKerningham(int res){
    if(res==0){
        return 0;
    }
    int count=0;
    while(res!=0){
        res&=res-1;
        count++;
    }
    return count;
}
int bitDifference(int a,int b){
    int res=a^b;
    return brianKerningham(res);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<bitDifference(a,b)<<endl;
}