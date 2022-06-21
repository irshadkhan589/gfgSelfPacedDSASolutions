#include<iostream>
using namespace std;
#include<vector>
 vector<vector<int> > stockBuySell(int A[], int n){
        // code here
     
        vector<vector<int> > answer;
        for(int i=1;i<n;i++){
               vector<int> buySellPair;
           if(A[i]>A[i-1]){
               buySellPair.push_back(i-1);
               i++;
               while(i<n){
                   if(A[i]>A[i-1]){
                       i++;
                   }
                   else
                   break;
               }
               buySellPair.push_back(i-1);
               answer.push_back(buySellPair);
           }
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
    vector<vector<int> > answer= stockBuySell(a,n);
    for (int i = 0; i < answer.size(); i++)
{
    for (int j = 0; j < answer[i].size(); j++)
    {
        cout << answer[i][j]<<' ';
    }
    cout<<endl;
}
return 0;
}