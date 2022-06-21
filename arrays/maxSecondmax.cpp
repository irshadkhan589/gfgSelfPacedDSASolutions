#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> maxSecondMax(int a[], int n){
    vector<int> answer;
    if(n==1){
        answer.push_back(a[0]);
        answer.push_back(-1);
        return answer;
    }
    int maxElement=INT_MIN;
    for(int i=0;i<n;i++){
        maxElement=max(maxElement,a[i]);
    }
    int secondMaxElement=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<maxElement){
            secondMaxElement=max(secondMaxElement,a[i]);
        }
    }
    if(secondMaxElement==INT_MIN){
        answer.push_back(maxElement);
        answer.push_back(-1);
    }
    else
    {
        answer.push_back(maxElement);
        answer.push_back(secondMaxElement);
    }
    return answer;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> answer = maxSecondMax(a,n);
    for (int element: answer){
      cout << element << ' ';
}
cout<<endl;
return 0;
}