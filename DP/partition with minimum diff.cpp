//codingninjas.com/codestudio/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

#include <bits/stdc++.h> 
int minSubsetSumDifference(vector<int>& arr, int n)
{
	int totSum=0;
  for (int i = 0; i < n; i++) {
    totSum += arr[i];
  }
  int k=totSum;
  vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    if(arr[0]<=k) dp[0][arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            bool bt=dp[i-1][j];
            bool t=false;
            if(arr[i]<=j) t=dp[i-1][j-arr[i]];
            dp[i][j]= bt||t;
        }
    }

	int mini=1e9;
	for(int s1=0;s1<=totSum/2;s1++){
		if(dp[n-1][s1]==true){
			mini=min(mini,abs((totSum-s1)-s1));
		}
	}
	return mini;
}
