#include <bits/stdc++.h> 

int solve(int idx,vector<int> &num,int sum,vector<vector<int>>&dp){

    if(idx==0){
       if(sum==0 && num[0]==0)return 2;
        if(sum==0 || sum==num[0]) return 1;
        return 0;
    }
    if(dp[idx][sum]!=-1){
        return dp[idx][sum];
    }
    int nt=solve(idx-1,num,sum,dp);
    
    int t=0;
    if(num[idx]<=sum) t=solve(idx-1,num,sum-num[idx],dp);
    return dp[idx][sum]=(t+nt);

}
int targetSum(int n, int target, vector<int>& arr) {
    int totSum = 0;
    for(int i=0; i<arr.size();i++){
        totSum += arr[i];
    }
    
    if(totSum-target<0) return 0;
    if((totSum-target)%2==1) return 0;
    
    int s2 = (totSum-target)/2;
    
    vector<vector<int>> dp(n,vector<int>(s2+1,-1));
    return solve(n-1,arr,s2,dp);
}
