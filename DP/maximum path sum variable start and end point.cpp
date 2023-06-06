//recursion
//https://www.codingninjas.com/codestudio/problems/maximum-path-sum-in-the-matrix_797998?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>

int solve(int i,int j,int m,vector<vector<int>> &mat){
    if(j<0 || j>=m) return -1e9;
    if(i==0) return mat[0][j];
    int up=mat[i][j]+solve(i-1,j,m,mat);
    int ld=mat[i][j]+solve(i-1,j-1,m,mat);
    int rd=mat[i][j]+solve(i-1,j+1,m,mat);
    return max(up,max(rd,ld));
}

    int getMaxPathSum(vector<vector<int>> &matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  int maxi = INT_MIN;
  for(int i=0;i<m;i++){
      int ans=solve(n-1,i,m,matrix);
      maxi=max(ans,maxi);
  }
  return maxi;
}

//memoization

#include <bits/stdc++.h>

int solve(int i,int j,int m,vector<vector<int>> &mat,vector<vector<int>> &dp){
    if(j<0 || j>=m) return -1e9;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==0) return mat[0][j];

    int up=mat[i][j]+solve(i-1,j,m,mat,dp);
    int ld=mat[i][j]+solve(i-1,j-1,m,mat,dp);
    int rd=mat[i][j]+solve(i-1,j+1,m,mat,dp);
    return dp[i][j]= max(up,max(rd,ld));
}

    int getMaxPathSum(vector<vector<int>> &matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  int maxi = INT_MIN;
  vector<vector<int>>dp(n,vector<int>(m,-1));
  for(int i=0;i<m;i++){
      int ans=solve(n-1,i,m,matrix,dp);
      maxi=max(ans,maxi);
  }
  return maxi;
}

//tabulation

#include <bits/stdc++.h>
int getMaxPathSum(vector<vector<int>> &matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  int maxi = INT_MIN;

  vector<vector<int>>dp(n,vector<int>(m,0));
  for(int i=0;i<m;i++){
     dp[0][i]=matrix[0][i];
  }
  for(int i=1;i<n;i++){
      for(int j=0;j<m;j++){
          int up=dp[i-1][j]+matrix[i][j];

          int ld=matrix[i][j];
          if(j-1>=0) ld+=dp[i-1][j-1];
          else ld+= -1e9;

          int rd=matrix[i][j];
          if(j+1<m) rd+=dp[i-1][j+1];
          else rd+= -1e9;

          dp[i][j]=max(up,max(ld,rd));
      }
  }
  for(int j=0; j<m;j++){
        maxi = max(maxi,dp[n-1][j]);
    }
  return maxi;
}

//space optimised  O(M)

#include <bits/stdc++.h>
int getMaxPathSum(vector<vector<int>> &matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  int maxi = INT_MIN;
 vector<int> prev(m,0), curr(m,0);
  vector<vector<int>>dp(n,vector<int>(m,0));
  for(int i=0;i<m;i++){
     prev[i]=matrix[0][i];
  }
  for(int i=1;i<n;i++){
      for(int j=0;j<m;j++){
          int up=prev[j]+matrix[i][j];

          int ld=matrix[i][j];
          if(j-1>=0) ld+=prev[j-1];
          else ld+= -1e9;

          int rd=matrix[i][j];
          if(j+1<m) rd+=prev[j+1];
          else rd+= -1e9;

          curr[j]=max(up,max(ld,rd));
      }
      prev=curr;
  }
  for(int j=0; j<m;j++){
        maxi = max(maxi,prev[j]);
    }
  return maxi;
}