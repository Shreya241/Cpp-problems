//memoisation
#include <bits/stdc++.h> 

int solve(int ind,vector<int>&h, vector<int>&dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int j2=INT_MAX;
    int j1=solve(ind-1,h,dp)+abs(h[ind]-h[ind-1]);
    if(ind>1){
        j2=solve(ind-2,h,dp)+abs(h[ind]-h[ind-2]);
    }
    return dp[ind]=min(j1,j2);
}

int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n,-1);
    return solve(n-1,heights,dp);
}


//tabulation


int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n,0);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int j1=dp[i-1]+abs(heights[i]-heights[i-1]);
        int j2=INT_MAX;
        if(i>1){
            j2=dp[i-2]+abs(heights[i]-heights[i-2]);
        }
        dp[i]=min(j1,j2);
    }
    return dp[n-1];
}