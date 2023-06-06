
//https://www.codingninjas.com/codestudio/problems/partitions-with-given-difference_3751628?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
#include <bits/stdc++.h> 
int mod=(int)(1e9+7);
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
    return dp[idx][sum]=(t+nt)%mod;

}

int countPartitions(int n, int d, vector<int> &arr) {
    int tot=0;
    for(auto it:arr)tot+=it;
    int tar=((tot-d)/2);
    if((tot-d < 0) || ((tot-d)%2)) return false;
    vector<vector<int>>dp(n,vector<int>(tar+1,-1));
    return solve(n-1,arr,tar,dp);
}


