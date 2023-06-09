//recursive
//https://takeuforward.org/data-structure/buy-and-sell-stocks-with-transaction-fees-dp-40/
//https://www.codingninjas.com/codestudio/problems/rahul-and-his-chocolates_3118974?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
#include <bits/stdc++.h> 

int solve(vector<int>& values, int ind,int n,int buy,int fee){
    if(ind==n) return 0;
    int profit;
     if(buy==0){
        profit = max(0+solve(values,ind+1,n,0,fee), -values[ind] + solve(values,ind+1,n,1,fee));
    }
    
    if(buy==1){
        profit = max(0+solve(values,ind+1,n,1,fee), values[ind] - fee + solve(values,ind+1,n,0,fee));
    }
    return profit;
}
int maximumProfit(int n, int fee, vector<int> &prices) {
    return solve(prices,0,n,0,fee);
}


//memoisation

#include <bits/stdc++.h> 

int solve(vector<int>& values, int ind,int n,int buy,int fee,vector<vector<int>>&dp){
    if(ind==n) return 0;
    if(dp[ind][buy]!=-1) return dp[ind][buy];
    int profit;

     if(buy==0){
        profit = max(0+solve(values,ind+1,n,0,fee,dp), -values[ind] + solve(values,ind+1,n,1,fee,dp));
    }
    
    if(buy==1){
        profit = max(0+solve(values,ind+1,n,1,fee,dp), values[ind] - fee + solve(values,ind+1,n,0,fee,dp));
    }
    return dp[ind][buy]=profit;
}
int maximumProfit(int n, int fee, vector<int> &prices) {
     vector<vector<int>>dp(n,vector<int>(2,-1));
    return solve(prices,0,n,0,fee,dp);
}

//tabulation

#include <bits/stdc++.h> 


int maximumProfit(int n, int fee, vector<int> &values) {
     vector<vector<int>>dp(n+1,vector<int>(2,0));
    dp[n][0]=dp[n][1]=0;
    int profit;
    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            if(buy==0){// We can buy the stock
        profit = max(dp[ind+1][0], -values[ind] + dp[ind+1][1]);
    }
    
    if(buy==1){// We can sell the stock
        profit = max(dp[ind+1][1], values[ind] -fee + dp[ind+1][0]);
    }
    dp[ind][buy]=profit;
        }
    }
    return dp[0][0];
}


//space optimization

#include <bits/stdc++.h> 


int maximumProfit(int n, int fee, vector<int> &values) {
     vector<long> ahead (2,0);
    vector<long> cur(2,0);
    ahead[0]=ahead[1]=0;
    long profit;
    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            if(buy==0){// We can buy the stock
        profit = max(ahead[0], -values[ind] + ahead[1]);
    }
    
    if(buy==1){// We can sell the stock
        profit = max(ahead[1], values[ind] -fee + ahead[0]);
    }
   cur[buy]=profit;
        }
        ahead=cur;
    }
    return cur[0];
}
