#include <bits/stdc++.h>
using namespace std;

bool dfsHelper(vector<vector<int>>& adj,int source, vector<bool>& visited, int parent){
  visited[source]=true;
  for(auto ele : adj[source]){
      if(!visited[ele]){
        if(dfsHelper(adj,ele,visited,source))return true;
      }
      else if(ele!=parent){
        return true;
      }
  }
  return false;
}

bool isCycleUndirected(vector<vector<int>>& adj,int V){
    vector<bool> visited(V,0);
    for(int i = 0;i<V;i++){
      if(dfsHelper(adj,i,visited,-1))return true;
    }
    return false;
}

int main() {
  vector<vector<int>> adj = {
      {1, 2},    // Node 0 is connected to 1 and 2
      {3},       // Node 1 is connected to 3
      {4},       // Node 2 is connected to 4
      {},        // Node 3 has no connections
      {3}        // Node 4 is connected to 3
  };

      cout<<isCycleUndirected(adj,adj.size())<<endl;

    return 0;
}
