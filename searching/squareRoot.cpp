#include<iostream>
using namespace std;
int squareRootNaive(int n){
    int i=0;
   while (i*i<=n)
   {
       i++;
   }
    return i-1;
}
int squareRootBinary(int n){
    int low=0;
    int high=n;
    int ans =0;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid > n){
            high = mid-1;
        }
        else{
        low=mid+1;
        ans=mid;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<squareRootNaive(n)<<endl;
    cout<<squareRootBinary(n)<<endl;
    return 0;
}