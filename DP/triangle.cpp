class Solution {
public:
    int solve(vector<vector<int>>& tri,int n,int ind,int r,vector<vector<int>>&dp){
        if(r>=n) return 0;
        if(dp[r][ind]!=-1) return dp[r][ind];
        int d=tri[r][ind]+solve(tri,n,ind,r+1,dp);
        int right=tri[r][ind]+solve(tri,n,ind+1,r+1,dp);
        return dp[r][ind]=min(d,right);
    }
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        vector<vector<int>>dp=tri;
        for(auto &i : dp){
            for(auto &j : i){
                j = -1;
            }
        }
        return solve(tri,n,0,0,dp);
    }
};