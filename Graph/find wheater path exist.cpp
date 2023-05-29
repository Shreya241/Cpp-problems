//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int d1,d2,s1,s2;
        vector<vector<int>>vis(n,vector<int>(n,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                     d1=i,d2=j;
                }
                if(grid[i][j]==1){
                     s1=i,s2=j;
                }
            }
        }
        q.push({s1,s2});
        vis[s1][s2]==1;
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
        
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            
            
            for(int i=0;i<4;i++){
                int r=x+dx[i];
                int c=y+dy[i];
                if(r>=0 && c>=0 && r<n && c<n && vis[r][c]!=1 && grid[r][c]!=0){
                    if(r==d1 && c==d2){
                      return 1;
                    }
                    q.push({r,c});
                    vis[r][c]=1;
                }
            }
        }
        return 0;
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
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends