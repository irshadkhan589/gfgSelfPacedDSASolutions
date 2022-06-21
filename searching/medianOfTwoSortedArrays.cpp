#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
double avgNaive(int a1[], int n1, int a2[], int n2){
    int temp[n1+n2];
    for(int i=0;i<n1;i++){
        temp[i]=a1[i];
    }
    for(int j=n1;j<n1+n2;j++){
        temp[j]=a2[j-n1];
    }
    sort(temp,temp+n1+n2);
    double evenAnswer = (((double)temp[(n1+n2)/2]+(double)temp[((n1+n2)/2)-1])/(double)2);
    if((n1+n2)%2!=0){
        return (double)temp[(n1+n2)/2];
    }
    else
    return evenAnswer;
}
double optiBinary(int a1[], int n1, int a2[], int n2){
    if(n1>n2){
        return optiBinary(a2,n2,a1,n1);
    }
    int low=0;
    int high=n1;
    while (low<=high)
    {
        int cut1 = (low+high)/2;
        int cut2 = (n1+n2+1)/2 - cut1;
        int l1 = cut1==0?INT_MIN:a1[cut1-1];
        int l2 = cut2==0?INT_MIN:a2[cut2-1];
        int r1 = cut1==n1?INT_MAX:a1[cut1];
        int r2 = cut2==n2?INT_MIN:a2[cut2];
        
        if(l1<=r2&&l2<=r1){
            if((n1+n2)%2==0){
                return (max(l1,l2)+min(r1,r2))/2.0;
            }
            else{
                return max(l1,l2);
            }
        }
        else if(l1>r2){
            high=cut1-1;
        }
        else
        low=cut1+1;
    }
    return 0.0;
    //  int low = 0, high = n1;
        
    //     while(low <= high) {
    //         int cut1 = (low+high) >> 1;
    //         int cut2 = (n1 + n2 + 1) / 2 - cut1; 
            
        
    //         int left1 = cut1 == 0 ? INT_MIN : a1[cut1-1];
    //         int left2 = cut2 == 0 ? INT_MIN : a2[cut2-1]; 
            
    //         int right1 = cut1 == n1 ? INT_MAX : a1[cut1];
    //         int right2 = cut2 == n2 ? INT_MAX : a2[cut2]; 
            
            
    //         if(left1 <= right2 && left2 <= right1) {
    //             if( (n1 + n2) % 2 == 0 ) 
    //                 return (max(left1, left2) + min(right1, right2)) / 2.0; 
    //             else 
    //                 return max(left1, left2); 
    //         }
    //         else if(left1 > right2) {
    //             high = cut1 - 1; 
    //         }
    //         else {
    //             low = cut1 + 1; 
    //         }
    //     }
    //     return 0.0; 
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    cout<<avgNaive(a1,n1,a2,n2)<<endl;
    cout<<optiBinary(a1,n1,a2,n2)<<endl;
    return 0;
}