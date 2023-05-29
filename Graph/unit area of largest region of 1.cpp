//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int findMaxArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int delrow[] = {0,-1,-1,-1,0,+1,+1,+1};
        int delcol[] = {-1,-1,0,+1,+1,+1,0,-1};
        queue<pair<int,int>> q;
        int ans = 0;
        int area = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] and grid[i][j] == 1){
                    ans = 0;
                    q.push({i,j});
                    visited[i][j] = 1;
                }
                
                while(!q.empty()){
                    int row = q.front().first;
                    int col = q.front().second;
                    q.pop();
                    ans++;
                    
                    for(int ind=0;ind<8;ind++){
                        int nrow = row + delrow[ind];
                        int ncol = col + delcol[ind];
                        
                        if(nrow >=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && visited[nrow][ncol]!=1){
                            q.push({nrow,ncol});
                            visited[nrow][ncol]=1;
                        }
                    }
                }
                 area = max(area,ans);
            }
           
        }
        return  area;
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