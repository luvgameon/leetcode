//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
 int solve(vector<vector<int>>&grid,int i,int j,vector<vector<int>>&vis,int dir, vector<vector<vector<int>>>&dp){

        if(i>=grid.size() || j>=grid[0].size() || i<0 || j<0 || vis[i][j]) return 1e4-1;

        if(grid[i][j]==1) return 0;

        if(dir!=-1 && dp[i][j][dir]!=-1) return dp[i][j][dir];

        vis[i][j]=1;

        int left=1+solve(grid,i+1,j,vis,0,dp);

        int right=1+solve(grid,i,j+1,vis,1,dp);

        int down=1+solve(grid,i-1,j,vis,2,dp);

        int up=1+solve(grid,i,j-1,vis,3,dp);

        vis[i][j]=0;

        if(dir==-1)

        return min({left,right,up,down});

        return dp[i][j][dir]=min({left,right,up,down});

    }

 vector<vector<int>>nearest(vector<vector<int>>grid)

 {

     int n=grid.size(),m=grid[0].size();

     vector<vector<int>>ans(n,vector<int>(m,0));

     vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(4,-1)));

     vector<vector<int>>vis(n,vector<int>(m,0));

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            int val=solve(grid,i,j,vis,-1,dp);

            ans[i][j]=val;

        }

    }

    return ans;

 }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends