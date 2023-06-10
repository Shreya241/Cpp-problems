//recursive
//https://takeuforward.org/data-structure/burst-balloons-partition-dp-dp-51/
#include <bits/stdc++.h>

int solve(vector<int>& a,int i,int j){
	if(i>j) return 0;
	int maxi = INT_MIN;
	for(int ind=i;ind<=j;ind++){
		int cost=a[ind]*a[i-1]*a[j+1] + solve(a,i,ind-1)+solve(a,ind+1,j);
		maxi = max(maxi, cost);
	}
	return maxi;
}

int maxCoins(vector<int>& a)
{
	int n=a.size();
	a.push_back(1);
    a.insert(a.begin(),1);
    return solve(a,1,n);
}

//memoisation

#include <bits/stdc++.h>

int solve(vector<int>& a,int i,int j,vector<vector<int>>&dp){
	if(i>j) return 0;

	if(dp[i][j]!=-1) return dp[i][j];
	int maxi = INT_MIN;
	for(int ind=i;ind<=j;ind++){
		int cost=a[ind]*a[i-1]*a[j+1] + solve(a,i,ind-1,dp)+solve(a,ind+1,j,dp);
		maxi = max(maxi, cost);
	}
	return dp[i][j]=maxi;
}

int maxCoins(vector<int>& a)
{
	int n=a.size();
	a.push_back(1);
    a.insert(a.begin(),1);
	vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    return solve(a,1,n,dp);
}

//tabulation

#include <bits/stdc++.h>


int maxCoins(vector<int>& a)
{
	int n=a.size();
	a.push_back(1);
    a.insert(a.begin(),1);
	vector<vector<int>>dp(n+2,vector<int>(n+2,0));
    
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n;j++){
			if(i>j) continue;
			int maxi = INT_MIN;
			for(int ind=i;ind<=j;ind++){
				int cost=a[ind]*a[i-1]*a[j+1] + dp[i][ind-1]+dp[ind+1][j];
				maxi = max(maxi, cost);
			}
			dp[i][j]=maxi;
		}
	}
	return dp[1][n];
}