//https://www.codingninjas.com/codestudio/problems/rod-cutting-problem_800284?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
//recursion

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&p , int idx,int n){
	if(idx==0) return p[0]*n;

	int nt=0+solve(p,idx-1,n);
	int t=-1e9;
	int rl=idx+1;
	if(rl<=n) t=p[idx]+solve(p,idx,n-rl);
	return max(t,nt);

}

int cutRod(vector<int> &price, int n)
{
	return solve(price,n-1,n);
}


//memoisation

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&p , int idx,int n,vector<vector<int>>&dp){
	if(idx==0) return p[0]*n;

	if(dp[idx][n]!=-1) return dp[idx][n];
	int nt=0+solve(p,idx-1,n,dp);
	int t=-1e9;
	int rl=idx+1;
	if(rl<=n) t=p[idx]+solve(p,idx,n-rl,dp);
	return dp[idx][n]= max(t,nt);

}

int cutRod(vector<int> &price, int n)
{
	vector<vector<int>>dp(n,vector<int>(n+1,-1));
	return solve(price,n-1,n,dp);
}

//tabulation
#include<bits/stdc++.h>
using namespace std;

int cutRod(vector<int> &price, int n)
{
	vector<vector<int>>dp(n,vector<int>(n+1,-1));
	
	for(int i=0;i<=n;i++){
		dp[0][i]=price[0]*i;
	}

	for(int idx=1;idx<n;idx++){
		for(int l=0;l<=n;l++){
			int nt=dp[idx-1][l];
	int t=INT_MIN;
	int rl=idx+1;
	if(rl<=l) t=price[idx]+dp[idx][l-rl];
	dp[idx][l]= max(t,nt);
		}
	}
	return dp[n-1][n];
}


//space optimised

#include<bits/stdc++.h>
using namespace std;

int cutRod(vector<int> &price, int n)
{
	vector<int>prev(n+1,0);
	
	for(int i=0;i<=n;i++){
		prev[i]=price[0]*i;
	}

	for(int idx=1;idx<n;idx++){
		for(int l=0;l<=n;l++){
			int nt=prev[l];
	int t=INT_MIN;
	int rl=idx+1;
	if(rl<=l) t=price[idx]+prev[l-rl];
	prev[l]= max(t,nt);
		}
	}
	return prev[n];
}
