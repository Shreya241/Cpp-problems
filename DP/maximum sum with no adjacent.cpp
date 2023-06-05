//memoization

#include <bits/stdc++.h>

using namespace std;

int solveUtil(int ind, vector<int>& arr, vector<int>& dp){
    
    if(dp[ind]!=-1) return dp[ind];
    if(ind==0) return arr[0];
    if(ind<0)  return 0;
    int pick=arr[ind]+solveUtil(ind-2,arr,dp);
    int notpick=solveUtil(ind-1,arr,dp);
    return dp[ind]=max(pick,notpick);
}


int solve(int n, vector<int>& arr){
    vector<int> dp(n,-1);
    return solveUtil(n-1, arr, dp);
}

int main() {

  vector<int> arr{2,1,4,9};
  int n=arr.size();
  cout<<solve(n,arr);

}

//tabulation

#include <bits/stdc++.h>

using namespace std;

int solveUtil(int n, vector<int>& arr, vector<int>& dp){
    
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        int pick=arr[i];
        if(i>1){
            pick+=dp[i-2];
        }
        int notpick=dp[i-1];
        dp[i]= max(pick, nonPick);
    }
    return dp[n-1];
}


int solve(int n, vector<int>& arr){
    vector<int> dp(n,-1);
    return solveUtil(n, arr, dp);
}

int main() {

  vector<int> arr{2,1,4,9};
  int n=arr.size();
  cout<<solve(n,arr);

}