#include<iostream>
#include<vector>
using namespace std;
void reverseInGroups(vector<long long>& a, int n, int k){

    for(int i=0;i<n;i+=k){
        int left =i;
        int right=min(i+k-1,n-1);
        while(left<=right){
            swap(a[left],a[right]);
            left++;
            right--;
        }
    }
    return;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long> a;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        a.push_back(x);
    }
    reverseInGroups(a,n,k);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}