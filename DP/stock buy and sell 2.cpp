//recursive

#include<bits/stdc++.h>
using namespace std;

long solve(long *values, int ind,int n,int buy){
    if(ind==n) return 0;
    long profit;
     if(buy==0){// We can buy the stock
        profit = max(0+solve(values,ind+1,n,0), -values[ind] + solve(values,ind+1,n,1));
    }
    
    if(buy==1){// We can sell the stock
        profit = max(0+solve(values,ind+1,n,1), values[ind] + solve(values,ind+1,n,0));
    }
    return profit;
}

long getMaximumProfit(long *values, int n)
{
   return solve(values,0,n,0);
}


//memoisation

#include<bits/stdc++.h>
using namespace std;

long solve(long *values, int ind,int n,int buy,vector<vector<long>>&dp){
    if(ind==n) return 0;

    if(dp[ind][buy]!=-1) return dp[ind][buy];
    long profit;
     if(buy==0){// We can buy the stock
        profit = max(0+solve(values,ind+1,n,0,dp), -values[ind] + solve(values,ind+1,n,1,dp));
    }
    
    if(buy==1){// We can sell the stock
        profit = max(0+solve(values,ind+1,n,1,dp), values[ind] + solve(values,ind+1,n,0,dp));
    }
    return dp[ind][buy]=profit;
}

long getMaximumProfit(long *values, int n)
{
    vector<vector<long>>dp(n,vector<long>(2,-1));
     return solve(values,0,n,0,dp);
}

//tabulation

#include<bits/stdc++.h>
using namespace std;

long getMaximumProfit(long *values, int n)
{
    vector<vector<long>>dp(n+1,vector<long>(2,0));
    dp[n][0]=dp[n][1]=0;
    long profit;
    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            if(buy==0){// We can buy the stock
        profit = max(dp[ind+1][0], -values[ind] + dp[ind+1][1]);
    }
    
    if(buy==1){// We can sell the stock
        profit = max(dp[ind+1][1], values[ind] + dp[ind+1][0]);
    }
    dp[ind][buy]=profit;
        }
    }
    return dp[0][0];
}

//space optimization

#include<bits/stdc++.h>
using namespace std;

long getMaximumProfit(long *values, int n)
{
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
        profit = max(ahead[1], values[ind] + ahead[0]);
    }
   cur[buy]=profit;
        }
        ahead=cur;
    }
    return cur[0];
}