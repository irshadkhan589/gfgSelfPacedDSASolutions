#include<iostream>
#include<climits>
using namespace std;
int largestOptimised(int a[], int n){
    int largest=INT_MIN;
    for(int i=1;i<n;i++){
        largest=max(a[i-1],largest);
    }
    return largest;
}
int largestNaive(int a[], int n){
    for(int i=0;i<n;i++){
    bool flag = true;
        for(int j=0;j<n;j++){
            if(a[j]>a[i]){
                flag=false;
            }
        }
        if(flag)
            return a[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<largestOptimised(a,n)<<endl;
    cout<<largestNaive(a,n)<<endl;
    return 0;
}