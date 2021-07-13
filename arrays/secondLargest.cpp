#include<iostream>
#include<climits>
using namespace std;
int largest(int a[], int n){
    int largest=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[largest]){
            largest=i;
        }
    }
    return largest;
}
int linearSearch(int a[],int n, int comparator){
    for(int i=0;i<n;i++){
        if(a[i]==comparator){
            return i;
        }
    }
    return -1;
}
int secondLargestNaive(int a[],int n){
    int comparator=-1;
    int indexOfLargest=largest(a,n);
    for(int i=0;i<n;i++){
            if(a[i]!=a[indexOfLargest]){
                comparator=max(comparator,a[i]);
                }
            }
            int result = linearSearch(a,n,comparator);
    if(comparator==-1)
    return comparator;
    return result;
}
int main(){
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<secondLargestNaive(a,n)<<endl;
    return 0;
}