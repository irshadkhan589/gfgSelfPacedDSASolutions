#include<iostream>
using namespace std;
void freqInSorted(int a[], int n){
    int k=0;
    int freq[n];
    freq[k]=0;
    int res[n];
    res[k]=a[0];
    freq[k]++;
    for(int i=1;i<n;i++){
        if(a[i]==res[k]){
            freq[k]++;
        }
        else if(a[i]!=res[k]){
            k++;
            res[k]=a[i];
            freq[k]=1;
        }
    }
    for(int i=0;i<=k;i++){
        cout<<res[i]<<' '<<freq[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    freqInSorted(a,n);
    return 0;
}