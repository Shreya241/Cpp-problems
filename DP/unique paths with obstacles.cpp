//https://www.codingninjas.com/codestudio/problems/maze-obstacles_977241?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
//memoization
int mod=(int)(1e9+7);

int solve(int i,int j,vector< vector< int> > &mat,vector<vector<int>>&dp){
    if(i>=0 && j>=0 && mat[i][j]==-1) return 0;
	if(i==0 && j==0)
	{
		return 1;
	}
	if(i<0 || j<0) return 0;

	if(dp[i][j]!=-1) return dp[i][j];

	int up=solve(i-1,j,mat,dp);
	int left=solve(i,j-1,mat,dp);
	return dp[i][j]= (up+left)%mod;
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>>dp(n,vector<int>(m,-1));
   return solve(n-1,m-1,mat,dp);
}

//tabulation

int mod=(int)(1e9+7);

int solve(int n,int m,vector< vector< int> > &mat,vector<vector<int>>&dp){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    if(mat[i][j]==-1) dp[i][j]= 0;
	else if(i==0 && j==0)
	{
		dp[i][j]= 1;
        continue;
	}else{
    int l=0;int u=0;
			if(i>0){
				u=dp[i-1][j];
			}
                        if (j > 0) {
                          l = dp[i][j - 1];
                        }
                        dp[i][j] = (l + u) % mod;
        }
        }
    }
    return dp[n-1][m-1];
}


int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>>dp(n,vector<int>(m));
    return solve(n,m,mat,dp);
}