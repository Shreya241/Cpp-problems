//https://www.codingninjas.com/codestudio/problems/minimum-elements_3843091?leftPanelTab=0
//recursion  TC= O(2^n)++ exponential SC=O(N)++
#include <bits/stdc++.h> 

int solve(int idx,vector<int>&num,int T){
    if(idx==0){
        if(T%num[idx]==0) return T/num[idx];
        else return 1e9;
    }

    int nt=solve(idx-1,num,T);
    int t=INT_MAX;
    if(num[idx]<=T) t=1+solve(idx,num,T-num[idx]);
    return min(t,nt);
}
int minimumElements(vector<int> &num, int x)
{
    int n=num.size();
    int ans= solve(n-1,num,x);
    if(ans >= 1e9) return -1;
    return ans;
}

//memoization TC=O(T*N) SC=O(T*N)+O(N)

#include <bits/stdc++.h> 

int solve(int idx,vector<int>&num,int T,vector<vector<int>>&dp){
    if(idx==0){
        if(T%num[idx]==0) return T/num[idx];
        else return 1e9;
    }

    if(dp[idx][T]!=-1){
        return dp[idx][T];
    }
        
    int nt=solve(idx-1,num,T,dp);
    int t=1e9;
    if(num[idx]<=T) t=1+solve(idx,num,T-num[idx],dp);
    return dp[idx][T]=min(t,nt);
}
int minimumElements(vector<int> &num, int x)
{
    int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
    int ans= solve(n-1,num,x,dp);
    if(ans >= 1e9) return -1;
    return ans;
}

//tabulation  TC=O(T*N) SC=O(T*N)

#include <bits/stdc++.h> 

int minimumElements(vector<int>& arr, int T){
    
    int n= arr.size();
    
    vector<vector<int>> dp(n,vector<int>(T+1,0));
    
    for(int i=0; i<=T; i++){
        if(i%arr[0] == 0)  
            dp[0][i] = i/arr[0];
        else dp[0][i] = 1e9;
    }
    
    for(int ind = 1; ind<n; ind++){
        for(int target = 0; target<=T; target++){
            
            int notTake = 0 + dp[ind-1][target];
            int take = 1e9;
            if(arr[ind]<=target)
                take = 1 + dp[ind][target - arr[ind]];
                
             dp[ind][target] = min(notTake, take);
        }
    }
    
    int ans = dp[n-1][T];
    if(ans >=1e9) return -1;
    return ans;
}
