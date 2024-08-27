#include <bits/stdc++.h>
using namespace std;

bool dfsRec(vector<vector<int>>& adj, int source, vector<bool>& visited, vector<bool>& isRecursion) {
    visited[source] = true;
    isRecursion[source] = true;

    for (auto ele : adj[source]) {
        if (!visited[ele]) {
            if (dfsRec(adj, ele, visited, isRecursion)) return true;
        }
        // Correct condition to detect a cycle in a directed graph
        else if (isRecursion[ele]) {
            return true;
        }
    }

    isRecursion[source] = false;
    return false;
}

bool isCycleDirected(vector<vector<int>>& adj, int V) {
    vector<bool> visited(V, false);
    vector<bool> isRecursion(V, false);

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfsRec(adj, i, visited, isRecursion)) return true;
        }
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

    cout << isCycleDirected(adj, adj.size()) << endl;

    return 0;
}
