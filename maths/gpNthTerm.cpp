#include<iostream>
#include<cmath>
using namespace std;
double gpNthTerm(int n1, int n2,int n){
    double N1=double(n1);
    double N2=double(n2);
    double N=double(n);
    double R=N2/N1;
    double t=double(N1*pow(R,N-1));
    return t;
}
int main(){
    int n1,n2,n;
    cin>>n1>>n2>>n;
    cout<<gpNthTerm(n1,n2,n)<<endl;
    return 0;
}