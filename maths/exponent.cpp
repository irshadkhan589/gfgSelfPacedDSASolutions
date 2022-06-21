#include<iostream>
using namespace std;
int exponentNaive(int n,int p){
    int res=1;
    for(int i=0;i<p;i++){
        res*=n;
    }
    return res;
}
int exponentRecursiveLogNComplexity(int n, int p){
    if(p==0){
        return 1;
    }
    int temp= exponentRecursiveLogNComplexity(n,p/2);
    temp=temp*temp;
    if(p%2==0)
        return temp;
    else
        return temp*n;
}
int exponentIterativeLogNComplexity(int n, int p){
    int res=1;
    while(p>0){
    if(p%2!=0){
        res*=n;
    }
    n*=n;
    p/=2;
    }
    return res;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<exponentNaive(n,p)<<endl;
    cout<<exponentRecursiveLogNComplexity(n,p)<<endl;
    cout<<exponentIterativeLogNComplexity(n,p)<<endl;
    return 0;
}