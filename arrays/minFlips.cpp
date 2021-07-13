#include<iostream>
using namespace std;
void minFlipsON(bool a[], int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            if(a[i]!=a[0]){
                cout<<"from "<<i<<" to ";
                count++;
            }
            else 
            cout<<i-1<<endl;
        }
    }
    if(a[n-1]!=a[0]){
        cout<<n-1<<endl;
    }
    cout<<"count is "<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    bool a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    minFlipsON(a,n);
    return 0;
}