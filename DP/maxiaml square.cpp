class Solution {
public:

int solveTab(vector<vector<char>>&v,int &maxi)
{
    int n(v.size()),m(v[0].size());
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            int right=dp[i][j+1];
            int diagonal=dp[i+1][j+1];
            int down=dp[i+1][j];
            if(v[i][j] == '1'){
                int ans=1+min({right,down,diagonal});
                maxi=max(maxi,ans);
                dp[i][j]=ans;                                                                           
            }
            else{
                dp[i][j]=0;
            }
        }

    }
    return dp[0][0];
}
    int maximalSquare(vector<vector<char>>& matrix) {
        int n(matrix.size()),m(matrix[0].size());
        int maxi=0;
        solveTab(matrix,maxi);
        return maxi*maxi;
    }
};