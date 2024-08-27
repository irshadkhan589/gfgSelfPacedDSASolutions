#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        int freshCount = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    visited[i][j] = 2;
                } else if(grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }

        int time = 0;
        int count = 0;

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            time = max(time, t);
            vector<int> drow = {1, -1, 0, 0};
            vector<int> dcol = {0, 0, 1, -1};
            for(int i = 0; i < 4; i++) {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && visited[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                    visited[nrow][ncol] = 2;
                    count++;
                    q.push({{nrow, ncol}, t + 1});
                }
            }
        }

        if(count == freshCount) {
            return time;
        } else {
            return -1;
        }
    }
};

int main() {
    vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};
    Solution solution;
    int result = solution.orangesRotting(grid);
    cout << result << endl;
    return 0;
}
