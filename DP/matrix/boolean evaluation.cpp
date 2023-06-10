
//recursion

#include <bits/stdc++.h> 
int mod=1e9+7;
#define ll long long
int solve(int i,int j,int isTrue,string & exp){
    if (i > j) return 0;
    if (i == j) {
      if (isTrue == 1)
        return exp[i] == 'T';
      else
        return exp[i] == 'F';
    }
    ll ways = 0;
    for (int ind = i + 1; ind <= j - 1; ind += 2) {
        ll lT = solve(i, ind - 1, 1, exp);
        ll lF = solve(i, ind - 1, 0, exp);
        ll rT = solve(ind + 1, j, 1, exp);
        ll rF = solve(ind + 1, j, 0, exp);

        if (exp[ind] == '&') {
            if (isTrue) ways = (ways + (lT * rT) % mod) % mod;
            else ways = (ways + (lF * rT) % mod + (lT * rF) % mod + (lF * rF) % mod) % mod;
        }
        else if (exp[ind] == '|') {
            if (isTrue) ways = (ways + (lF * rT) % mod + (lT * rF) % mod + (lT * rT) % mod) % mod;
            else ways = (ways + (lF * rF) % mod) % mod;
        }
        else {
            if (isTrue) ways = (ways + (lF * rT) % mod + (lT * rF) % mod) % mod;
            else ways = (ways + (lF * rF) % mod + (lT * rT) % mod) % mod;
        }
    }
    return ways;
}

int evaluateExp(string & exp) {
    int n=exp.size();
    return solve(0,n-1,1,exp);
}

//memoisation

#include <bits/stdc++.h> 
int mod=1e9+7;
#define ll long long
int solve(int i,int j,int isTrue,string & exp,vector<vector<vector<ll>>> &dp){
    if (i > j) return 0;
    if (i == j) {
      if (isTrue == 1)
        return exp[i] == 'T';
      else
        return exp[i] == 'F';
    }
     if (dp[i][j][isTrue] != -1) return dp[i][j][isTrue];
    ll ways = 0;
    for (int ind = i + 1; ind <= j - 1; ind += 2) {
        ll lT = solve(i, ind - 1, 1, exp,dp);
        ll lF = solve(i, ind - 1, 0, exp,dp);
        ll rT = solve(ind + 1, j, 1, exp,dp);
        ll rF = solve(ind + 1, j, 0, exp,dp);

        if (exp[ind] == '&') {
            if (isTrue) ways = (ways + (lT * rT) % mod) % mod;
            else ways = (ways + (lF * rT) % mod + (lT * rF) % mod + (lF * rF) % mod) % mod;
        }
        else if (exp[ind] == '|') {
            if (isTrue) ways = (ways + (lF * rT) % mod + (lT * rF) % mod + (lT * rT) % mod) % mod;
            else ways = (ways + (lF * rF) % mod) % mod;
        }
        else {
            if (isTrue) ways = (ways + (lF * rT) % mod + (lT * rF) % mod) % mod;
            else ways = (ways + (lF * rF) % mod + (lT * rT) % mod) % mod;
        }
    }
    return dp[i][j][isTrue]= ways;
}

int evaluateExp(string & exp) {
    int n=exp.size();
    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(n, vector<ll>(2, -1)));
    return solve(0,n-1,1,exp,dp);
}