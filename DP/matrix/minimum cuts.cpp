
//https://takeuforward.org/data-structure/minimum-cost-to-cut-the-stick-dp-50/
//recursive

#include <bits/stdc++.h> 

int solve(vector<int> &cuts,int i,int j){
    if(i>j) return 0;
    int mini = INT_MAX;
    for(int ind=i;ind<=j;ind++){
        int cost=cuts[j+1]-cuts[i-1]+solve(cuts,i,ind-1)+solve(cuts,ind+1,j);
        mini=min(mini,cost);
    }
    return mini;
}

int cost(int n, int c, vector<int> &cuts){
    ;
}

//memoisation

#include <bits/stdc++.h> 

int solve(vector<int> &cuts,int i,int j,vector<vector<int>>&dp){
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mini = INT_MAX;
    for(int ind=i;ind<=j;ind++){
        int cost=cuts[j+1]-cuts[i-1]+solve(cuts,i,ind-1,dp)+solve(cuts,ind+1,j,dp);
        mini=min(mini,cost);
    }
    return dp[i][j]=mini;
}

int cost(int n, int c, vector<int> &cuts){
    cuts.push_back(n);
    cuts.insert(cuts.begin(),0);
    sort(cuts.begin(),cuts.end());
    vector<vector<int>>dp(c+1,vector<int>(c+1,-1));
    return solve(cuts,1,c,dp);
}

//tabulation

#include <bits/stdc++.h> 

int cost(int n, int c, vector<int> &cuts){
    cuts.push_back(n);
    cuts.insert(cuts.begin(),0);
    sort(cuts.begin(),cuts.end());
    vector<vector<int>>dp(c+2,vector<int>(c+2,0));
    for(int i=c;i>=1;i--){
        for(int j=1;j<=c;j++){
            if(i>j) continue;
            int mini = INT_MAX;
        for(int ind=i;ind<=j;ind++){
        int cost=cuts[j+1]-cuts[i-1]+dp[i][ind-1]+dp[ind+1][j];
        mini=min(mini,cost);
    }
       dp[i][j]=mini;
        }
    }
    return dp[1][c];
}