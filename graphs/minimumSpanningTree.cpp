//Function to find sum of weights of edges of the Minimum Spanning Tree.
#include<bits/stdc++.h>
using namespace std;

    int spanningTree(int V, vector<vector<int>> adj[]) {
       priority_queue<P,vector<P>, greater<P>> pq;
       vector<bool> visited(V,0);
       pq.push({0,0});
       int sum = 0;

       while(!pq.empty()){
           P curr = pq.top();
           pq.pop();

           if(visited[curr.second]){
               continue;
           }
           visited[curr.second]=true;
           sum+=curr.first;

           for(auto ele : adj[curr.second]){
               if(!visited[ele[0]]){
                   pq.push({ele[1],ele[0]});
               }
           }
       }
       return sum;
    }
  int main(){
    int V = 4;
    vector<vector<int>> adj = {
      {1, 5},
      {2, 3},
      {2, 1}
    }
    cout<<spanningTree(V,adj)<<endl;
  }
