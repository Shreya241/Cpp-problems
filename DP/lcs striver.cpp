//recursive  TC(2^n * 2^m)
//codingninjas.com/codestudio/problems/longest-common-subsequence_624879?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include<bits/stdc++.h>
using namespace std;

int solve(string s, string t,int n1,int n2){
	if(n1<0 || n2<0) return 0;
	
	if(s[n1]==t[n2]) return 1+solve(s,t,n1-1,n2-1);
	else return max(solve(s,t,n1,n2-1),solve(s,t,n1-1,n2));
}


int lcs(string s, string t)
{
	int n=s.size();
	int m=t.size();
	return solve(s,t,n-1,m-1);
}

//memoisation TC(n * m)  SC(n*m)+(n+m)
#include<bits/stdc++.h>
using namespace std;

int solve(string s, string t,int n1,int n2,vector<vector<int>>&dp){
	if(n1<0 || n2<0) return 0;
	
	if(dp[n1][n2]!=-1) return dp[n1][n2];

	if(s[n1]==t[n2]) return dp[n1][n2]= 1+solve(s,t,n1-1,n2-1,dp);
	else return dp[n1][n2]= max(solve(s,t,n1,n2-1,dp),solve(s,t,n1-1,n2,dp));
}


int lcs(string s, string t)
{
	int n=s.size();
	int m=t.size();
	vector<vector<int>>dp(n,vector<int>(m,-1));
	return solve(s,t,n-1,m-1,dp);
}

//tabulation   TC(n * m)  SC(n*m)

//shifting index to right so that now s1[0] means -1 index and s1[1] means 0th index.

#include<bits/stdc++.h>
using namespace std;



int lcs(string s, string t)
{
	int n=s.size();
	int m=t.size();
	vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
	for(int i=0;i<=n;i++){
		dp[i][0]=0;
	}
	for(int i=0;i<=m;i++){
		dp[0][i]=0;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
	     if(s[i-1]==t[j-1]) dp[i][j]= 1+dp[i-1][j-1];
	     else dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n][m];
}

//space optimised TC(n * m)  SC(M)

#include<bits/stdc++.h>
using namespace std;



int lcs(string s, string t)
{
	int n=s.size();
	int m=t.size();
	vector<int>prev(m+1,0),curr(m+1,0);

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
	     if(s[i-1]==t[j-1]) curr[j]= 1+prev[j-1];
	     else curr[j]= max(prev[j],curr[j-1]);
		}
		prev=curr;
	}
	return prev[m];
}


