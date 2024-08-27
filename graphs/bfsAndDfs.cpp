#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& adj, int s) {
  cout<<endl<<"BFS"<<endl;
  int n = adj.size();
  vector<bool> visited(n,false);
  queue<int> q;
  //source
  q.push(s);
  visited[s]=true;

  //bfs
  while(!q.empty()){
    int current = q.front();
    q.pop();
    cout<< current<<' ';
    for(auto element : adj[current]){
      if(!visited[element]){
          q.push(element);
          visited[element]=true;
      }
    }
  }

















}
void dfsRec(vector<vector<int>>& adj, int s, vector<bool>& visited){
  visited[s]=true;
  cout<<s<<' ';
  for(auto ele : adj[s]){
    if(!visited[ele]){
      dfsRec(adj,ele,visited);
    }
  }
}
void dfs(vector<vector<int>>& adj, int s){
    cout<<endl<<"DFS"<<endl;
    int n = adj.size();
    vector<bool> visited(n,0);
    for(int i = 0;i<n;i++){
      if(!visited[i]){
        dfsRec(adj,i,visited);
      }
    }
    cout<<endl;
}

int main() {
vector<vector<int>> adj = {{1},{0,2,3,4},{1},{1},{1,5},{4}};

      // BFS
      bfs(adj, 0);
      // // DFS
      // dfs(adj,0);

    return 0;
}
