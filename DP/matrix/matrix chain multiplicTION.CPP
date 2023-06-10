//recursive  exponential
//https://takeuforward.org/dynamic-programming/matrix-chain-multiplication-dp-48/
#include <bits/stdc++.h> 

int solve(vector<int> &arr, int i,int j){
    if(i==j) return 0;
    int mini=1e9;
    for(int k=i;k<j;k++){
        int steps=arr[i-1]*arr[k]*arr[j]+solve(arr,i,k)+solve(arr,k+1,j);
        mini=min(mini,steps);
    }
    return mini;
}

int matrixMultiplication(vector<int> &arr, int N)
{
   return solve (arr,1,N-1);
}

//memoisation Time Complexity: O(N*N*N) Space Complexity: O(N*N) + O(N)

#include <bits/stdc++.h> 

int solve(vector<int> &arr, int i,int j, vector<vector<int>>&dp){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mini=1e9;
    for(int k=i;k<j;k++){
        int steps=arr[i-1]*arr[k]*arr[j]+solve(arr,i,k,dp)+solve(arr,k+1,j,dp);
        mini=min(mini,steps);
    }
    return dp[i][j]= mini;
}

int matrixMultiplication(vector<int> &arr, int N)
{
    vector<vector<int>>dp(N,vector<int>(N,-1));
   return solve (arr,1,N-1,dp);
}

//tabulation

#include <bits/stdc++.h> 

int solve(vector<int> &arr, int i,int j, vector<vector<int>>&dp){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mini=1e9;
    for(int k=i;k<j;k++){
        int steps=arr[i-1]*arr[k]*arr[j]+solve(arr,i,k,dp)+solve(arr,k+1,j,dp);
        mini=min(mini,steps);
    }
    return dp[i][j]= mini;
}

int matrixMultiplication(vector<int> &arr, int n)
{
    vector<vector<int>>dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=i+1;j<n;j++){
            int mini=1e9;
            for(int k=i;k<j;k++){
            int steps=arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];
            mini=min(mini,steps);
        }
        dp[i][j]=mini;
        }
    }
    return dp[1][n-1];
}