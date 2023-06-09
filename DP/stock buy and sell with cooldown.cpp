//recursive
//codingninjas.com/codestudio/problems/highway-billboards_3125969?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
#include <bits/stdc++.h> 
int solve(vector<int> &values, int ind,int n,int buy){
    if(ind>=n) return 0;
    int profit;
     if(buy==0){// We can buy the stock
        profit = max(0+solve(values,ind+1,n,0), -values[ind] + solve(values,ind+1,n,1));
    }
    
    if(buy==1){// We can sell the stock
        profit = max(0+solve(values,ind+1,n,1), values[ind] + solve(values,ind+2,n,0));
    }
    return profit;
}
int stockProfit(vector<int> &prices){
    int n=prices.size();
     return solve(prices,0,n,0);
}

//memoisation
#include <bits/stdc++.h> 
int solve(vector<int> &values, int ind,int n,int buy,vector<vector<int>>&dp){
    if(ind>=n) return 0;
    int profit;
    if(dp[ind][buy]!=-1) return dp[ind][buy];
     if(buy==0){// We can buy the stock
        profit = max(0+solve(values,ind+1,n,0,dp), -values[ind] + solve(values,ind+1,n,1,dp));
    }
    
    if(buy==1){// We can sell the stock
        profit = max(0+solve(values,ind+1,n,1,dp), values[ind] + solve(values,ind+2,n,0,dp));
    }
    return dp[ind][buy]= profit;
}
int stockProfit(vector<int> &prices){
    int n=prices.size();
    vector<vector<int>>dp(n,vector<int>(2,-1));
     return solve(prices,0,n,0,dp);
}
//tabulation

#include <bits/stdc++.h> 

int stockProfit(vector<int> &values){
    int n=values.size();
    vector<vector<long>>dp(n+2,vector<long>(2,0));
    dp[n][0]=dp[n][1]=0;
    long profit;
    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            if(buy==0){// We can buy the stock
        profit = max(dp[ind+1][0], -values[ind] + dp[ind+1][1]);
    }
    
    if(buy==1){// We can sell the stock
        profit = max(dp[ind+1][1], values[ind] + dp[ind+2][0]);
    }
    dp[ind][buy]=profit;
        }
    }
    return dp[0][0];
}