//recursive
//https://www.codingninjas.com/codestudio/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h> 

int solve(int idx,vector<int> &num,int sum){
    if(sum==0) return 1;
    if(idx==0){
        return(num[idx]==sum);
    }
   
    int nt=solve(idx-1,num,sum);
    int t=0;
    if(num[idx]<=sum) t=solve(idx-1,num,sum-num[idx]);
    return t+nt;

}
int findWays(vector<int> &num, int tar)
{
    int n=num.size();
    int idx=n-1;
    return solve(idx,num,tar);
}

//memoisation

#include <bits/stdc++.h> 

int solve(int idx,vector<int> &num,int sum,vector<vector<int>>&dp){

    if(idx==0){
       if(sum==0 && num[0]==0)return 2;
        if(sum==0 || sum==num[0]) return 1;
        return 0;
    }
    if(dp[idx][sum]!=-1){
        return dp[idx][sum];
    }
    int nt=solve(idx-1,num,sum,dp);
    
    int t=0;
    if(num[idx]<=sum) t=solve(idx-1,num,sum-num[idx],dp);
    return dp[idx][sum]=t+nt;

}
int findWays(vector<int> &num, int tar)
{
    int n=num.size();
    int idx=n-1;
    vector<vector<int>>dp(n,vector<int>(tar+1,-1));
    return solve(idx,num,tar,dp);
}

//tabulation

int findWays(vector<int> &num, int tar){
     int n = num.size();

    vector<vector<int>> dp(n,vector<int>(tar+1,0));
    
    if(num[0] == 0) dp[0][0] =2;  // 2 cases -pick and not pick
    else dp[0][0] = 1;  // 1 case - not pick
    
    if(num[0]!=0 && num[0]<=tar) dp[0][num[0]] = 1;  // 1 case -pick
    
    for(int ind = 1; ind<n; ind++){
        for(int target= 0; target<=tar; target++){
            
            int notTaken = dp[ind-1][target];
    
            int taken = 0;
                if(num[ind]<=target)
                    taken = dp[ind-1][target-num[ind]];
        
            dp[ind][target]= (notTaken + taken)%mod;
        }
    }
    return dp[n-1][tar];
}