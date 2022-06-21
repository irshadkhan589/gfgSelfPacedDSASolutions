#include<iostream>
#include<cmath>
using namespace std;
int rightmost(int m, int n){
     int res=m^n;
        if (m!=n)
        return log2(res & -res) + 1;
        else
        return -1;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<rightmost(m,n)<<endl;
    return 0;
}