//recursive

class Solution {
public:
    int solve(vector<int>& nums,int curr,int prev,int n){
        if(curr>=n) return 0;
        int take=0;
        if(prev==-1 || nums[curr]>nums[prev]){
            take=1+solve(nums,curr+1,curr,n);
        }
        int nt=solve(nums,curr+1,prev,n);
        return max(take,nt);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        return solve(nums,0,-1,n);
    }
};

//memoisation

class Solution {
public:
    int solve(vector<int>& nums,int curr,int prev,int n, vector<vector<int>>&dp){
        if(curr>=n) return 0;
        int take=0;
        if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
        if(prev==-1 || nums[curr]>nums[prev]){
            take=1+solve(nums,curr+1,curr,n,dp);
        }
        int nt=solve(nums,curr+1,prev,n,dp);
        return dp[curr][prev+1]=max(take,nt);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(nums,0,-1,n,dp);
    }
};