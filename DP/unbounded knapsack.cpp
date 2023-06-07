
//recursive
//https://www.codingninjas.com/codestudio/problems/unbounded-knapsack_1215029?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
#include <bits/stdc++.h> 

int solve(int idx,int w,vector<int>&val, vector<int>&wt){
    if(idx==0){
        return (w/wt[0])*val[0];
    }
    int nt=solve(idx-1,w,val,wt);
    int t=-1e9;
    if(wt[idx]<=w) t=val[idx]+solve(idx,w-wt[idx],val,wt);
    return max(t,nt);
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    return solve(n-1,w,profit,weight);
}

//memoisation

#include <bits/stdc++.h> 

int solve(int idx,int w,vector<int>&val, vector<int>&wt,vector<vector<int>>&dp){
    if(idx==0){
        return (w/wt[0])*val[0];
    }
    if(dp[idx][w]!=-1) return dp[idx][w];
    int nt=solve(idx-1,w,val,wt,dp);
    int t=-1e9;
    if(wt[idx]<=w) t=val[idx]+solve(idx,w-wt[idx],val,wt,dp);
    return dp[idx][w]=max(t,nt);
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>>dp(n,vector<int>(w+1,-1));
    return solve(n-1,w,profit,weight,dp);
}


//tabulation

#include <bits/stdc++.h> 

int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &weight)
{
    vector<vector<int>>dp(n,vector<int>(w+1,0));
    for(int i=0;i<=w;i++){
        dp[0][i]=((int)i/weight[0])*val[0];
    }
    for(int idx=1;idx<n;idx++){
        for(int wt=0;wt<=w;wt++){
            int nt=dp[idx-1][wt];
            int t=-1e9;
            if(weight[idx]<=wt) t=val[idx]+dp[idx][wt-weight[idx]];
            dp[idx][wt]=max(t,nt);
        }
    }
    return dp[n-1][w];
}


//space optimised

vector<int>prev(w+1,0);
    for(int i=0;i<=w;i++){
        prev[i]=((int)i/weight[0])*val[0];
    }
    for(int idx=1;idx<n;idx++){
        for(int wt=0;wt<=w;wt++){
            int nt=prev[wt];
            int t=-1e9;
            if(weight[idx]<=wt) t=val[idx]+prev[wt-weight[idx]];
            prev[wt]=max(t,nt);
        }
    }
    return prev[w];
