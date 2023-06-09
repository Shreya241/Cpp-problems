//https://www.codingninjas.com/codestudio/problems/longest-increasing-subsequence_630459?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
//https://takeuforward.org/data-structure/longest-increasing-subsequence-dp-41/
//recursive

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int ind,int prev){
    if(ind==n) return 0;

    int nt=solve(arr,n,ind+1,prev);
    int t=0;
    if(arr[ind]>prev || prev==-1){
        t=1+solve(arr,n,ind+1,arr[ind]);
    }
    return max(t,nt);
}

int longestIncreasingSubsequence(int arr[], int n)
{
    return solve(arr,n,0,-1);
}


//memoization

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int ind,int prev,vector<vector<int>>&dp){
    if(ind==n) return 0;

if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
    int nt=solve(arr,n,ind+1,prev,dp);
    int t=0;
    if(arr[ind]>arr[prev] || prev==-1){
        t=1+solve(arr,n,ind+1,ind,dp);
    }
    return dp[ind][prev+1]=max(t,nt);
}



int longestIncreasingSubsequence(int arr[], int n)
{
    vector<vector<int>>dp(n,vector<int>(n+1,-1));
    return solve(arr,n,0,-1,dp);
}
