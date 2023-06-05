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


int solve(int n, int arr[]){
    vector<int> arr1;
    vector<int> arr2;
    
    if(n==1)
       return arr[0];
    
    for(int i=0; i<n; i++){
        
        if(i!=0) arr1.push_back(arr[i]);
        if(i!=n-1) arr2.push_back(arr[i]);
    }
    vector<int> dp(n,-1);
    long long int ans1 = solveUtil(n-1,arr1,dp);
    vector<int> pp(n,-1);
    long long int ans2 = solveUtil(n-1,arr2,pp);
    
    return max(ans1,ans2);
}

int main() {

  int n=5;
  int arr[5]={10,3,4,4,3};
  cout<<solve(n,arr);

}