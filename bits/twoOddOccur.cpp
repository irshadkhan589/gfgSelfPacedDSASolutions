#include<iostream>
using namespace std;
void oddOccuringNaive(int a[],int n){

for(int i=0;i<=n-1;i++){
        int count=0;
        for(int j=0;j<=n-1;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count%2!=0){
            cout<<a[i]<<' ';
        }    
    }
    cout<<endl;
}
void twoOddOccuringON(int a[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res^=a[i];
    }
    int count=0;
    int setbit=0;
    int rest=res;
    while(setbit!=1){
        setbit=res&1;
            count++;
        res>>=1;
    }
        int res1=0;
    for(int i=0;i<n;i++){
        if(((a[i]>>count-1)&1)!=0){
            res1^=a[i];
        }
    }
    int res2=rest^res1;
    cout<<res1<<' '<<res2<<' '<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    oddOccuringNaive(a,n);
    twoOddOccuringON(a,n);
    return 0;
}