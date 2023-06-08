//recursive
//https://www.codingninjas.com/codestudio/problems/subsequence-counting_3755256?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
#include <bits/stdc++.h> 

int solve(string &s, string &t, int i, int j){
    if(j<0){
        return 1;
    }
    if(i<0) return 0;

    if(s[i]==t[j]) return solve(s,t,i-1,j-1)+solve(s,t,i-1,j);
    else return solve(s,t,i-1,j);
}
int subsequenceCounting(string &t, string &s, int lt, int ls) {
    return solve(t,s,lt-1,ls-1);
} 

//memoisation

#include <bits/stdc++.h> 
int mod=1e9+7;
int solve(string &s, string &t, int i, int j,vector<vector<int>>&dp){
    if(j<0){
        return 1;
    }
    if(i<0) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    if (s[i] == t[j]) {
      int leave = solve(s, t, i - 1, j - 1, dp) ;
      int take=solve(s, t, i - 1, j, dp);
      return dp[i][j]=(take+leave)%mod;
    } else
      return dp[i][j] = solve(s, t, i - 1, j, dp);
}
int subsequenceCounting(string &t, string &s, int lt, int ls) {
    vector<vector<int>>dp(lt,vector<int>(ls,-1));
    return solve(t,s,lt-1,ls-1,dp);
} 

//tabulation

#include <bits/stdc++.h> 
int mod=1e9+7;

int subsequenceCounting(string &s, string &t, int lt, int ls) {
    vector<vector<int>>dp(lt+1,vector<int>(ls+1,0));
    for(int i=0;i<=lt;i++){
        dp[i][0]=1;
    }

    for(int j=1;j<=ls;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=lt;i++){
        for(int j=1;j<=ls;j++){
          if (s[i-1] == t[j-1]) {
            int leave = dp[i - 1][j - 1];
            int take = dp[i - 1][j];
            dp[i][j] = (take + leave) % mod;
          } else
            dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[lt][ls];
} 