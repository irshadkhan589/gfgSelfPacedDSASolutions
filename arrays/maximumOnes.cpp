#include<iostream>
using namespace std;
int maxFONN(bool a[],int n){
        int res=0;
        for(int i=0;i<n;i++){
        int current=0;
            for(int j=i;j<n;j++){
                if(a[j]==1){
                    current++;
                }
                else
                break;
            }
            res=max(res,current);
        }
        return res;
}
int maxFON(bool a[], int n){
    int res=0;
    int current =0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            current =0;
        }
        else{
        current++;
        res=max(res,current);
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    bool a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxFONN(a,n)<<endl;
    cout<<maxFON(a,n)<<endl;
    return 0;
}