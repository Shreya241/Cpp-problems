//https://www.codingninjas.com/codestudio/problems/ninja-and-his-friends_3125885?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
//recursion

#include <bits/stdc++.h> 

int solve(int i,int j1,int j2,int n,int m,vector<vector<int>> &grid){
    if(j1<0||j1>=m || j2<0 || j2>=m){
        return -1e9;
    }
    if(i==n-1){
        if(j1==j2) return grid[i][j1];
        else return grid[i][j1]+grid[i][j2];
    }
    int maxi=INT_MIN;
    for(int di=-1;di<=1;di++){
        for(int dj=-1;dj<=1;dj++){
            int ans;
            if(j1==j2){
                ans=grid[i][j1]+solve(i+1,j1+di,j2+dj,n,m,grid);
            }else{
                ans=grid[i][j1]+grid[i][j2]+solve(i+1,j1+di,j2+dj,n,m,grid);
            }
            maxi=max(maxi,ans);
        }
    }
    return maxi;
}
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    return solve(0,0,c-1,r,c,grid);
}

//memoization

#include <bits/stdc++.h> 

int solve(int i,int j1,int j2,int n,int m,vector<vector<int>> &grid,vector < vector < vector < int >>> &dp){
    if(j1<0||j1>=m || j2<0 || j2>=m){
        return -1e9;
    }
    if(i==n-1){
        if(j1==j2) return grid[i][j1];
        else return grid[i][j1]+grid[i][j2];
    }
    if(dp[i][j1][j2]!=-1){
        return dp[i][j1][j2];
    }
    int maxi=INT_MIN;
    for(int di=-1;di<=1;di++){
        for(int dj=-1;dj<=1;dj++){
            int ans;
            if(j1==j2){
                ans=grid[i][j1]+solve(i+1,j1+di,j2+dj,n,m,grid,dp);
            }else{
                ans=grid[i][j1]+grid[i][j2]+solve(i+1,j1+di,j2+dj,n,m,grid,dp);
            }
            maxi=max(maxi,ans);
        }
    }
    return dp[i][j1][j2]= maxi;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    vector < vector < vector < int >>> dp(r, vector < vector < int >> (c, vector < int
  > (c, -1)));
    return solve(0,0,c-1,r,c,grid,dp);
}

//tabulation

#include <bits/stdc++.h> 

int maximumChocolates(int n, int m, vector<vector<int>> &grid) {
    vector < vector < vector < int >>> dp(n, vector < vector < int >> (m, vector < int
  > (m, -1)));
  for(int j1=0;j1<m;j1++){
    for (int j2 = 0; j2 < m; j2++) {
        if(j1==j2) dp[n-1][j1][j2]=grid[n-1][j1];
        else dp[n-1][j1][j2]=grid[n-1][j1]+grid[n-1][j2];
    }
  }
    for(int i=n-2;i>=0;i--){
        for(int j1=0;j1<m;j1++){
            for(int j2=0;j2<m;j2++){
                 int maxi = INT_MIN;
                 for(int di=-1;di<=1;di++){
              for(int dj=-1;dj<=1;dj++){
            int ans;
            if(j1==j2){
                ans=grid[i][j1];
            }else{
                ans=grid[i][j1]+grid[i][j2];
            }
            if ((j1 + di < 0 || j1 + di >= m) ||
              (j2 + dj < 0 || j2 + dj >= m))

              ans += -1e9;
            else
              ans += dp[i + 1][j1 + di][j2 + dj];

            maxi=max(maxi,ans);
        }
    }
       dp[i][j1][j2]= maxi;
            }
        }
    }
    return dp[0][0][m - 1];
}