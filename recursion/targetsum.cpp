#include<iostream>
#include<string>
using namespace std;
void targetsum(int a[],int n,int i,string set, int sum,int tar){
    if(i==n){
        if(sum==tar){
            cout<<set<<endl;
        }
        return;
    }
    targetsum(a,n,i+1,set+to_string(a[i])+" ",sum+a[i],tar);
    targetsum(a,n,i+1,set,sum,tar);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    targetsum(a,n,0,"",0,x);
    return 0;
}