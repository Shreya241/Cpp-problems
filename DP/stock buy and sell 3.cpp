//https://www.codingninjas.com/codestudio/problems/buy-and-sell-stock_1071012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
//recursive
#include <bits/stdc++.h> 

//also if given atmost k transactions we can use same code

int solve(vector<int>& values, int ind,int n,int buy,int cap){
    if(ind==n) return 0;
    if(cap==0) return 0;
    int profit;
     if(buy==0){
        profit = max(0+solve(values,ind+1,n,0,cap), -values[ind] + solve(values,ind+1,n,1,cap));
    }
    
    if(buy==1){
        profit = max(0+solve(values,ind+1,n,1,cap), values[ind] + solve(values,ind+1,n,0,cap-1));
    }
    return profit;
}
int maxProfit(vector<int>& prices, int n)
{
     return solve(prices,0,n,0,2);
}

// memoisation  Time Complexity: O(N*2*3) Space Complexity: O(N*2*3) + O(N)

#include <bits/stdc++.h> 

int solve(vector<int>& values, int ind,int n,int buy,int cap,vector<vector<vector<int>>>&dp){
    if(ind==n) return 0;
    if(cap==0) return 0;

    if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
    int profit;
     if(buy==0){
        profit = max(0+solve(values,ind+1,n,0,cap,dp), -values[ind] + solve(values,ind+1,n,1,cap,dp));
    }
    
    if(buy==1){
        profit = max(0+solve(values,ind+1,n,1,cap,dp), values[ind] + solve(values,ind+1,n,0,cap-1,dp));
    }
    return dp[ind][buy][cap]=profit;
}
int maxProfit(vector<int>& prices, int n)
{
    vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
     return solve(prices,0,n,0,2,dp);
}

//tabulation Time Complexity: O(N*2*3)  Space Complexity: O(N*2*3)

#include <bits/stdc++.h> 

int maxProfit(vector<int>& values, int n)
{
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
     int profit;
    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            for(int cap=1;cap<=2;cap++){
               
     if(buy==0){
        profit = max(0+dp[ind+1][0][cap], -values[ind] + dp[ind+1][1][cap]);
    }
    
    if(buy==1){
        profit = max(0+dp[ind+1][1][cap], values[ind] + dp[ind+1][0][cap-1]);
    }
    dp[ind][buy][cap]=profit;
            }
        }
    }
    return dp[0][0][2];
} 

//space optimization  Time Complexity: O(N*2*3) Space Complexity: O(1)

#include <bits/stdc++.h> 

int maxProfit(vector<int>& values, int n)
{
   vector<vector<int>> ahead(2,vector<int> (3,0));
    vector<vector<int>> cur(2,vector<int> (3,0));
     int profit;

    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            for(int cap=1;cap<=2;cap++){
               
     if(buy==0){
        profit = max(0+ahead[0][cap], -values[ind] + ahead[1][cap]);
    }
    
    if(buy==1){
        profit = max(0+ahead[1][cap], values[ind] + ahead[0][cap-1]);
    }
    cur[buy][cap]=profit;
            }
        }
        ahead=cur;
    }
    return ahead[0][2];
}
