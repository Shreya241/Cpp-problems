//recursive

class Solution {
public:
    int solve(int ind,vector<int>& cost){
        if(ind<0) return 0;
        if(ind==0 ||ind==1) return cost[ind];
        int j2=INT_MAX;
        int j1=(cost[ind]+solve(ind-1,cost));
        if(ind>1){
            j2=(cost[ind]+solve(ind-2,cost));
        }
        return min(j1,j2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(solve(n-1,cost),solve(n-2,cost));
    }
};
//memoisation
class Solution {
public:
    int solve(int ind,vector<int>& cost,vector<int>&dp){
        if(ind<0) return 0;
        if(ind==0 ||ind==1) return dp[ind]=cost[ind];
        if(dp[ind]!=-1) return dp[ind];
        int j2=INT_MAX;
        int j1=(cost[ind]+solve(ind-1,cost,dp));
        if(ind>1){
            j2=(cost[ind]+solve(ind-2,cost,dp));
        }
        return dp[ind]=min(j1,j2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(solve(n-1,cost,dp),solve(n-2,cost,dp));
    }
};