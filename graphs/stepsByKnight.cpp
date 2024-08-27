//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    queue<pair<pair<int,int>,int>> q;
	    q.push({{KnightPos[0],KnightPos[1]},0});
	    vector<vector<int>> visited(N+1,vector<int>(N+1,0));
	    visited[KnightPos[0]][KnightPos[1]]=1;
	    int steps = -1;
	    //BFS
	    while(!q.empty()){
	        int currPosX = q.front().first.first;
	        int currPosY = q.front().first.second;
	        int st = q.front().second;
	        if(currPosX==TargetPos[0] and currPosY==TargetPos[1]){
	            return st;
	        }
	        q.pop();
	        vector<int> drow = {1,1,-1,-1,2,2,-2,-2};
	        vector<int> dcol = {2,-2,2,-2,1,-1,1,-1};
	        for(int i = 0;i<8;i++){
	        int nrow = currPosX+drow[i];
	        int ncol = currPosY+dcol[i];
	        if(nrow>0 and ncol>0 and nrow<=N and ncol<=N and visited[nrow][ncol]==0){
	            q.push({{nrow,ncol},st+1});
	            visited[nrow][ncol]=1;
	        }
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.
int main(){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N=6;
		KnightPos[0]=4;
    KnightPos[1]=5;
		TargetPos[0]=1;
    TargetPos[1]=1;
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	return 0;
}
// } Driver Code Ends
