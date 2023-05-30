//{ Driver Code Starts BFS
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis,int r,int c){
      int n=grid.size();
      int m=grid[0].size();
      vis[r][c]=1;
      queue<pair<int,int>>q;
      q.push({r,c});
      int rN[4]={0,-1,0,1};
      int cN[4]={-1,0,1,0};
      while(!q.empty()){
          int x=q.front().first;
          int y=q.front().second;
          q.pop();
          for(int i=0;i<4;i++){
              int dx=x+rN[i];
              int dy=y+cN[i];
              if(dx>=0 && dy>=0 && dx<n && dy<m && !vis[dx][dy] && grid[dx][dy]=='X'){
                  vis[dx][dy]=1;
                  q.push({dx,dy});
              }
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
                   bfs(grid,vis,i,j);
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