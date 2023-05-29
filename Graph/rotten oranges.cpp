//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                if(grid[i][j]==1) c++;
            }
        }
        int dx[]={-1,0,1,0};
	    int dy[]={0,1,0,-1};
	    int ans=0;
	    int cs=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
            q.pop();
            ans=max(d,ans);
            
            for(int i=0;i<4;i++){
                int rx=r+dx[i];
                int cy=c+dy[i];
                if(rx>=0 && cy>=0 && rx<n && cy<m && grid[rx][cy]==1 && vis[rx][cy]==0){
                    vis[rx][cy]=1;
                    q.push({{rx,cy},d+1});
                    cs++;
                }
            }
        }

        if(c!=cs) return -1;
        else return ans;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends