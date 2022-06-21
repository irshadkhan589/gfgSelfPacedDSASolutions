#include<iostream>
using namespace std;
int searchInRotated(int a[],int low, int high, int key){
        while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[low]<a[mid]){
            if(key>=a[low]&&key<a[mid]){
                high=mid-1;
            }
            else
            low=mid+1;
        }
        if(a[mid]<a[high]){
            if(key>a[mid]&&key<=a[high]){
                low=mid+1;
            }
            else
            high=mid-1;
        }
        }
        return -1;
}
int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<searchInRotated(a,0,n-1,key)<<endl;
    return 0;
} 
