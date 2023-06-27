//recursion

class Solution {
public:
    int solve(vector<int>& coins, int amount,int ind){
        if(ind==0){
            if(amount%coins[0]==0) return amount/coins[0];
            return 1e9;
        }
        int take=INT_MAX;
        if(coins[ind]<=amount){
        take=1+solve(coins,amount-coins[ind],ind);
        }
        int nt=solve(coins,amount,ind-1);
        return min(take,nt);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int ans= solve(coins,amount,n-1);
        if(ans!=1e9) return ans;
        else return -1;
    }
};

//memoisation

class Solution {
public:
    int solve(vector<int>& coins, int amount,int ind,vector<vector<int>>&dp){
        if(ind==0){
            if(amount%coins[0]==0) return amount/coins[0];
            return 1e9;
        }
        if(dp[ind][amount]!=-1)    return dp[ind][amount];
        int take=INT_MAX;
        if(coins[ind]<=amount){
        take=1+solve(coins,amount-coins[ind],ind,dp);
        }
        int nt=solve(coins,amount,ind-1,dp);
        return dp[ind][amount]=min(take,nt);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans= solve(coins,amount,n-1,dp);
        if(ans>=1e9) return -1;
        else return ans;
    }
};