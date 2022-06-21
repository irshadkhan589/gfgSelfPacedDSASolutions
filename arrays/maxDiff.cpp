#include<iostream>
#include<climits>
using namespace std;
int maxDiff(int a[],int n){
    int maxD=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]>maxD){
                maxD=a[j]-a[i];
            }
        }
    }
    return maxD;
}
int maxDiffOpti(int a[], int n){
    int minEle=a[0];
    int maxD=a[1]-a[0];
    for(int i=1;i<n;i++){
        maxD= max(maxD,a[i]-minEle);
        minEle=min(minEle,a[i]);
    }
    return maxD;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxDiff(a,n)<<endl;
    cout<<maxDiffOpti(a,n)<<endl;
    return 0;
}