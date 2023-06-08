//recursive

//https://www.codingninjas.com/codestudio/problems/wildcard-pattern-matching_701650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include<iostream>
using namespace std;
bool isAllStars(string & S1, int i) {
  for (int j = 0; j <= i; j++) {
    if (S1[j] != '*')
      return false;
  }
  return true;
}

bool solve(string &p, string &t, int i,int j){
  if (i < 0 && j < 0)
    return true;
  if (i < 0 && j >= 0)
    return false;
  if (j < 0 && i >= 0)
    return isAllStars(p, i);

   if(p[i]==t[j] || p[i]=='?') return solve(p,t,i-1,j-1);
   else{
      if(p[i]=='*') return (solve(p,t,i-1,j)||(solve(p,t,i,j-1)));
      else return false;
   }
}

bool wildcardMatching(string p, string t)
{
   int n=p.size();
   int m=t.size();
   return solve(p,t,n-1,m-1);
}

//memoisation

#include<bits/stdc++.h>
using namespace std;
bool isAllStars(string & S1, int i) {
  for (int j = 0; j <= i; j++) {
    if (S1[j] != '*')
      return false;
  }
  return true;
}

bool solve(string &p, string &t, int i,int j,vector<vector<int>>&dp){
  if (i < 0 && j < 0)
    return true;
  if (i < 0 && j >= 0)
    return false;
  if (j < 0 && i >= 0)
    return isAllStars(p, i);

if(dp[i][j]!=-1) return dp[i][j];
   if(p[i]==t[j] || p[i]=='?') return dp[i][j]=solve(p,t,i-1,j-1,dp);
   else{
      if(p[i]=='*') return dp[i][j]= (solve(p,t,i-1,j,dp)||(solve(p,t,i,j-1,dp)));
      else return dp[i][j]= false;
   }
}

bool wildcardMatching(string p, string t)
{
   int n=p.size();
   int m=t.size();
   vector<vector<int>>dp(n,vector<int>(m,-1));
   return solve(p,t,n-1,m-1,dp);
}


//tabulation

