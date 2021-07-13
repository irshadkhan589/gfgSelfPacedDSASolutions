#include<iostream>
using namespace std;
int peakElementNaive(int a[], int n){
    if(n==1){
        return a[0];
    }
    if(a[0]>a[1]){
        return a[0];
    }
    if(a[n-1]>a[n-2]){
        return n-1;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>=a[i-1]&&a[i]>=a[i+1]){
            return a[i];
        }
    }
    return -1;
}
int peakElementBinary(int arr[], int n){
  	int low = 0, high = n - 1;

		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return arr[mid];
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;
			else
				low = mid + 1;
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
    cout<<peakElementNaive(a,n)<<endl;
    cout<<peakElementBinary(a,n)<<endl;
    return 0;
}