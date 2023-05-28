//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>v)
	{
	    int n=v.size();
	    int m=v[0].size();
	    vector<vector<int>>vis(n,vector<int>(m,0));
	    vector<vector<int>>dist(n,vector<int>(m,0));
	    queue<pair<pair<int,int>,int>>q;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(v[i][j]==1){
	                q.push({{i,j},0});
	                vis[i][j]=1;
	            }
	        }
	    }
	    int dx[]={-1,0,1,0};
	    int dy[]={0,1,0,-1};
	    while(!q.empty()){
	        int r=q.front().first.first;
	        int c=q.front().first.second;
	        int s=q.front().second;
	        q.pop();
	        dist[r][c]=s;
	        
	        for(int i=0;i<4;i++){
	            int nr=r+dx[i];
	            int nc=c+dy[i];
	            if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0){
	                vis[nr][nc]=1;
	                q.push({{nr,nc},s+1});
	            }
	        }
	    }
	    return dist;
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