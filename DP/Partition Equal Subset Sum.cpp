//https://www.codingninjas.com/codestudio/problems/partition-equal-subset-sum_892980?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

//recursive


#include <bits/stdc++.h> 

bool solve(int n, int sum, vector<int>&arr){
    if(sum==0) return true;
    if(n==0) return arr[0]==sum;

    bool nt=solve(n-1,sum,arr);
    bool t=false;
    if(arr[n]<=sum) t=solve(n-1,sum-arr[n],arr);
    return  t||nt;
}

bool canPartition(vector<int> &arr, int n)
{
	int s=0;
	for(int i=0;i<n;i++){
		s+=arr[i];
	}
	if(s%2!=0){
		return false;
        } else {
          return solve(n - 1, s/2, arr);
        }
}



// same as last one


#include <bits/stdc++.h> 

bool solve(int n, int k, vector<int> &arr) {
    vector<bool> prev(k+1,0),curr(k+1,0);
    prev[0]=true;
    if(arr[0]<=k) prev[arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            bool bt=prev[j];
            bool t=false;
            if(arr[i]<=j) t=prev[j-arr[i]];
            curr[j]= bt||t;
        }
        prev=curr;
    }
    return prev[k];

}

bool canPartition(vector<int> &arr, int n)
{
	int s=0;
	for(int i=0;i<n;i++){
		s+=arr[i];
	}
	if(s%2!=0){
		return false;
        } else {
          return solve(n, s/2, arr);
        }
}
