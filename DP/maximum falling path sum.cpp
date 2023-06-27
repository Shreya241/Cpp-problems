//recursion
class Solution {
public:
     int solve(int i,int j,int n,vector<vector<int>>& mat){
       if(j<0 || j>=n)
         return 1e9;
        if(i==0)
            return mat[0][j];
        
        int up = mat[i][j] + solve(i-1,j,n,mat);
        int leftDiagonal = mat[i][j] + solve(i-1,j-1,n,mat);
        int rightDiagonal = mat[i][j] + solve(i-1,j+1,n,mat);
        
        return min(up,min(leftDiagonal,rightDiagonal));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        int maxi = INT_MAX;
        for(int j=0; j<n;j++){
            int ans = solve(n-1,j,n,matrix);
            maxi =  min(maxi,ans);
        }
        return maxi;
    }
};

//memoisation

class Solution {
public:
     int solve(int i,int j,int n,vector<vector<int>>& mat,vector<vector<int>>&dp){
       if(j<0 || j>=n)
         return 1e9;
        if(i==0)
            return mat[0][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int up = mat[i][j] + solve(i-1,j,n,mat,dp);
        int leftDiagonal = mat[i][j] + solve(i-1,j-1,n,mat,dp);
        int rightDiagonal = mat[i][j] + solve(i-1,j+1,n,mat,dp);
        
        return dp[i][j]= min(up,min(leftDiagonal,rightDiagonal));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int maxi = INT_MAX;
        for(int j=0; j<n;j++){
            int ans = solve(n-1,j,n,matrix,dp);
            maxi =  min(maxi,ans);
        }
        return maxi;
    }
};

//tabulation
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minSum = INT_MAX;

        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));

        for(int j = 0; j<m; j++)
            dp[n-1][j] = matrix[n-1][j];

        for(int i = n-2; i>=0; i--){
            for(int j = 0; j<m; j++){

                for(int y = -1; y<=1; y++){
                    if(j+y >= 0 && j+y < m)
                        dp[i][j] = min(dp[i][j], dp[i+1][j+y]);
                }

                dp[i][j] += matrix[i][j];
            }
        }

        for(int j = 0; j<m; j++)
            minSum = min(minSum, dp[0][j]);

        return minSum;
    }
};