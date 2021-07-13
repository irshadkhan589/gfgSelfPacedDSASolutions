#include<iostream>
using namespace std;
void towerofhanoi(int n, char source, char aux, char dest){
    if(n==1){
        cout<<"move"<<n<<"from"<<source<<"to"<<dest<<endl;
        return;
    }
    towerofhanoi(n-1,source,dest,aux);
    cout<<"move"<<n<<"from"<<source<<"to"<<dest<<endl;
    towerofhanoi(n-1,aux,source,dest);
}
int main(){
    int n;
    cin>>n;
    towerofhanoi(n,'a','b','c');
    return 0;
}