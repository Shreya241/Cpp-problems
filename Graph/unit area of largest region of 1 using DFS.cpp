//{ Driver Code Starts BFS
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    void dfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis,int &count){
        vis[row][col] =1;
        
        count++;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int nrow =row+i;
                int ncol = col+j;
                
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                    dfs(nrow,ncol,grid,vis,count);
                }
            }
        }
    }

    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n= grid.size();
        int m = grid[0].size();
        
        int maxArea =0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j] ==1){
                    int area =0;
                    dfs(i,j,grid,vis,area);
                    maxArea = max(maxArea,area);
                }
            }
        }
        return maxArea;
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
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends