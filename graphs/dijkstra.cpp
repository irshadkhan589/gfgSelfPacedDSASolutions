#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<pair<int,int>>>& adj, int S) {
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;

        // Min Heap of pairs to store {distance, element}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0, S});

        while(!pq.empty()) {
            pair<int,int> curr = pq.top();
            pq.pop();
            int currNode = curr.second;

            for(auto ele : adj[currNode]) {
                int eleWeight = ele.second;
                int eleNode = ele.first;

                if(dist[eleNode] > dist[currNode] + eleWeight) {
                    dist[eleNode] = dist[currNode] + eleWeight;
                    pq.push({dist[eleNode], eleNode});
                }
            }
        }
        return dist;
    }
};

int main() {
    int V = 3; // Number of vertices
    int E = 3; // Number of edges
    int S = 0; // Source vertex

    // Adjacency list
    vector<vector<pair<int,int>>> adj(V);
    adj = {{{1, 1}, {2, 6}}, {{2, 3}, {0, 1}}, {{1, 3}, {0, 6}}};

    Solution obj;
    vector<int> ans = obj.dijkstra(V, adj, S);

    // Output the distances
    for (int i = 0; i < V; ++i) {
        cout << "Distance from source " << S << " to vertex " << i << " is " << ans[i] << "\n";
    }

    return 0;
}
