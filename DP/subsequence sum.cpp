//recursion
//codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=1

#include <bits/stdc++.h> 

bool solve(int n, int sum, vector<int>&arr){
    if(sum==0) return true;
    if(n==0) return arr[0]==sum;

    bool nt=solve(n-1,sum,arr);
    bool t=false;
    if(arr[n]<=sum) t=solve(n-1,sum-arr[n],arr);
    return  t||nt;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    return solve(n-1,k,arr);
}

//memoisation   time O(n*k) , Space O(n*k)+O(n)
 
#include <bits/stdc++.h> 

bool solve(int n, int sum, vector<int>&arr,vector<vector<int>>&dp){
    if(sum==0) return true;
    if(n==0) return arr[0]==sum;

    if(dp[n][sum]!=-1)
        return dp[n][sum];

    bool nt=solve(n-1,sum,arr,dp);
    bool t=false;
    if(arr[n]<=sum) t=solve(n-1,sum-arr[n],arr,dp);
    return dp[n][sum]= t||nt;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    return solve(n-1,k,arr,dp);
}

//tabulation   time O(n*k) , Space O(n*k)

#include <bits/stdc++.h> 

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    if(arr[0]<=k) dp[0][arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            bool bt=dp[i-1][j];
            bool t=false;
            if(arr[i]<=j) t=dp[i-1][j-arr[i]];
            dp[i][j]= bt||t;
        }
    }
    return dp[n-1][k];

}

//space optimised Space O(k)

#include <bits/stdc++.h> 

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool> prev(k+1,0),curr(k+1,0);
    prev[0]=true;
    prev[arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            bool bt=prev[j];
            bool t=false;
            if(arr[i]<=j) t=prev[j-arr[i]];
            curr[j]= bt||t;
        }
        prev=curr;
    }
    return prev[k];

}
