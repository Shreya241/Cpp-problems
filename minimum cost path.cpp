//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	typedef pair<int,pair<int,int>> p;
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        priority_queue<p,vector<p>,greater<p>>q;
        vector<vector<int>> dis( n , vector<int> (n, INT_MAX)); 
        dis[0][0]=grid[0][0];
        q.push({grid[0][0],{0,0}});

        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        while(!q.empty()){
            int d=q.top().first;
            int r=q.top().second.first;
            int c=q.top().second.second;
            q.pop();

            for(int i=0;i<4;i++){
                int x=r+dx[i];
                int y=c+dy[i];
                if(x>=0 && y>=0 && x<n && y<n){
                    if(d+grid[x][y]<dis[x][y]){
                        dis[x][y]=d+grid[x][y];
                        q.push({dis[x][y],{x,y}});
                    }
                }
            }
        }
        return dis[n-1][n-1];
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends