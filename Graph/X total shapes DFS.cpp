//{ Driver Code Starts BFS
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis,int r,int c){
      int n=grid.size();
      int m=grid[0].size();
      vis[r][c]=1;
      int rN[4]={0,-1,0,1};
      int cN[4]={-1,0,1,0};

          for(int i=0;i<4;i++){
              int dx=r+rN[i];
              int dy=c+cN[i];
              if(dx>=0 && dy>=0 && dx<n && dy<m && !vis[dx][dy] && grid[dx][dy]=='X'){
                  dfs(grid,vis,r,c);
                  vis[dx][dy]=1;
              }
          }
      }
      
    
    
    int xShape(vector<vector<char>>& grid) 
    {
       int n=grid.size();
       int m=grid[0].size();
       int c=0;
       vector<vector<int>>vis(n, vector<int>(m,0));
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(!vis[i][j] && grid[i][j]=='X'){
                   c++;
                   dfs(grid,vis,i,j);
               }
           }
       }
       return c;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends