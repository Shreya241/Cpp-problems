//recursion
//https://www.codingninjas.com/codestudio/problems/ways-to-make-coin-change_630471?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=3

#include<bits/stdc++.h>
using namespace std;

long solve(int *arr, int idx, int T){

    if(T==0) return 1;
    if(idx==0){
        if(T%arr[idx]==0) return 1;
        else return 0;
    }
    long nt=solve(arr,idx-1,T);
    long t=0;
    if(arr[idx]<=T) t= solve(arr,idx,T-arr[idx]);
    return t+nt;

}

long countWaysToMakeChange(int *arr, int n, int val)
{
    return solve(arr,n-1,val);
}

//memoisation
#include<bits/stdc++.h>
using namespace std;

long solve(int *arr, int idx, int T,vector<vector<long>>&dp){

    if(idx==0){
        if(T%arr[idx]==0) return 1;
        else return 0;
    }
    if(dp[idx][T]!=-1) return dp[idx][T];

    long nt=solve(arr,idx-1,T,dp);
    long t=0;
    if(arr[idx]<=T) t= solve(arr,idx,T-arr[idx],dp);
    return dp[idx][T]=t+nt;

}

long countWaysToMakeChange(int *arr, int n, int val)
{
    vector<vector<long>>dp(n,vector<long>(val+1,-1));

}



//tabulation
#include<bits/stdc++.h>
using namespace std;


long countWaysToMakeChange(int *arr, int n, int T)
{
    vector<vector<long>>dp(n,vector<long>(T+1,0));
    for(int i=0;i<=T;i++){
        if(i%arr[0]==0) dp[0][i]=1;
        else dp[0][i]=0;
    }

    for(int idx=1;idx<n;idx++){
        for(int val=0;val<=T;val++){
            long nt=dp[idx-1][val];
            long t=0;
            if(arr[idx]<=val) t= dp[idx][val-arr[idx]];

           dp[idx][val]=t+nt;
        }
    }
    return dp[n-1][T];
}

//space optimisation
#include<bits/stdc++.h>
using namespace std;


long countWaysToMakeChange(int *arr, int n, int T)
{
   
    vector<long>prev(T+1,0);
    for(int i=0;i<=T;i++){
        if(i%arr[0]==0) prev[i]=1;
        else prev[i]=0;
    }

    for(int idx=1;idx<n;idx++){
        for(int val=0;val<=T;val++){
            long nt=prev[val];
            long t=0;
            if(arr[idx]<=val) t= prev[val-arr[idx]];

           prev[val]=t+nt;
        }
    }
    return prev[T];
}