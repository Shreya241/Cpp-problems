//recursion
//https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
#include <bits/stdc++.h> 

int solve(vector<int> &wt, vector<int> &v, int idx, int W){
	if(idx==0){
		if(wt[0]<=W){
			return v[0];
		}else{
			return 0;
		}
	}
	int nt=solve(wt,v,idx-1,W);
	int t=INT_MIN;
	if(wt[idx]<=W) t=v[idx]+solve(wt,v,idx-1,W-wt[idx]);
	return max(t,nt);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return solve(weight,value,n-1,maxWeight);
}

//memoisation
#include <bits/stdc++.h> 

int solve(vector<int> &wt, vector<int> &val, int ind, int W,vector<vector<int>>&dp){
	if(ind==0){
		if(wt[0]<=W){
			return val[0];
                } else {
                  return 0;
                }
        }

    if(dp[ind][W]!=-1) return dp[ind][W];
	int nt=solve(wt,val,ind-1,W,dp);
	int t=INT_MIN;
	if(wt[ind]<=W) t=val[ind]+solve(wt,val,ind-1,W-wt[ind],dp);
	return dp[ind][W]=max(t,nt);
}

int knapsack(vector<int> wt, vector<int> val, int n, int W) 
{
	 vector<vector<int>> dp(n,vector<int>(W+1,-1));
    return solve(wt, val, n-1, W, dp);
}

//tabulation

#include <bits/stdc++.h> 
int knapsack(vector<int>& wt, vector<int>& val, int n, int W){
    
    vector<vector<int>> dp(n,vector<int>(W+1,0));
    
    //Base Condition
    
    for(int i=wt[0]; i<=W; i++){
        dp[0][i] = val[0];
    }
    
    for(int ind =1; ind<n; ind++){
        for(int cap=0; cap<=W; cap++){
            
            int notTaken = 0 + dp[ind-1][cap];
            
            int taken = INT_MIN;
            if(wt[ind] <= cap)
                taken = val[ind] + dp[ind-1][cap - wt[ind]];
                
            dp[ind][cap] = max(notTaken, taken);
        }
    }
    
    return dp[n-1][W];
}