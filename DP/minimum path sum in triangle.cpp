//recursive
https://www.codingninjas.com/codestudio/problems/triangle_1229398?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
#include <bits/stdc++.h> 

int solve(int n,int i,int j,vector<vector<int>>&arr){
	if(i==n-1) return arr[i][j];
		int d=solve(n,i+1,j,arr)+arr[i][j];
		int rd=solve(n,i+1,j+1,arr)+arr[i][j];
		return min(d,rd);
}

int minimumPathSum(vector<vector<int>>& triangle, int n){
	return solve(n,0,0,triangle);
}

//memoisation

#include <bits/stdc++.h> 

int solve(int n,int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
	if(i==n-1) return arr[i][j];
	if(dp[i][j]!=-1) return dp[i][j];
		int d=solve(n,i+1,j,arr,dp)+arr[i][j];
		int rd=solve(n,i+1,j+1,arr,dp)+arr[i][j];
		return dp[i][j]= min(d,rd);
}

int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<vector<int>>dp(n,vector<int>(n,-1));
	return solve(n,0,0,triangle,dp);
}

//tabulation

#include <bits/stdc++.h> 


int minimumPathSum(vector<vector<int>>& arr, int n){
	vector<vector<int>>dp(n,vector<int>(n,0));

	for(int i=0;i<n;i++){
		dp[n-1][i]=arr[n-1][i];
	}

	for(int i=n-2;i>=0;i--){
		for(int j=i;j>=0;j--){
			int d=dp[i+1][j]+arr[i][j];
			int dr=dp[i+1][j+1]+arr[i][j];
			dp[i][j]=min(d,dr);
		}
	}
	return dp[0][0];
}

//space optimised

#include <bits/stdc++.h> 


int minimumPathSum(vector<vector<int>>& arr, int n){
	vector<vector<int>>dp(n,vector<int>(n,0));
	vector<int>curr(n,0),prev(n,0);
	for(int i=0;i<n;i++){
		curr[i]=arr[n-1][i];
	}

	for(int i=n-2;i>=0;i--){
		for(int j=i;j>=0;j--){
			int d=curr[j]+arr[i][j];
			int dr=curr[j+1]+arr[i][j];
			prev[j]=min(d,dr);
		}
		curr=prev;
	}
	return curr[0];
}