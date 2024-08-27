#include <bits/stdc++.h>
using namespace std;
bool dfsRec(vector<vector<int>>& adj, int source,vector<bool>& visited,vector<bool>& isRecursion){
        visited[source]=true;
        isRecursion[source]=true;

        for(auto ele : adj[source]){
            if(!visited[ele]){
                if(dfsRec(adj,ele,visited,isRecursion))return true;
            }
            if(visited[ele] and isRecursion[ele]){
                return true;
            }
        }

        isRecursion[source]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        //Create adjacecny list using prerequisites
        for(auto ele : prerequisites){
            adj[ele[1]].push_back(ele[0]);
        }
        //Now detect cycle as usual using DFS
        vector<bool> visited(numCourses,0);
        vector<bool> isRecursion(numCourses,0);
        for(int i = 0;i<numCourses;i++){
            if(!visited[i]){
                if(dfsRec(adj,i,visited,isRecursion))return false;
            }
        }
        return true;
    }

int main(){
  vector<vector<int> prerequisites = {{1,0},{0,1}};
  int numCourses = 2;
  cout<<canFinish(numCourses,prerequisites)<<endl;
  return 0;
}
