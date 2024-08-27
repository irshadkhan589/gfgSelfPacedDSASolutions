#include <bits/stdc++.h>
using namespace std;

void topo(vector<vector<int>>& adj, int V){
  cout<<endl<<"Topological sort :"<<endl;
  //Find all indegress of each vertex
  vector<int> indegree(V,0);
  for(int i = 0;i<V;i++){
    for(auto ele : adj[i]){
      indegree[ele]++;
    }
  }

  //initialise a queue
  queue<int> q;

  //Check for vertices with indegree 0 and insert them in a queue
  for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

  //Now comes the sorting part using BFS using queue
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    cout<<curr<<' ';
    for(auto ele : adj[curr]){
      if(indegree[ele]!=0){
        indegree[ele]--;
      }
      if(indegree[ele]==0){
        q.push(ele);
      }
    }
  }
}

int main() {
  vector<vector<int>> adj = {
      {1, 2},    // Node 0 is connected to 1 and 2
      {3},       // Node 1 is connected to 3
      {4},       // Node 2 is connected to 4
      {},        // Node 3 has no connections
      {3}        // Node 4 is connected to 3
  };

  topo(adj, adj.size());  // Corrected function call

  return 0;
}
