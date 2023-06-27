/*dp[1]=1
dp[2]=2
dp[3]=5
dp[4]=11
dp[i]=2*dp[i-1]+dp[i-3]*/

//memoisation

class Solution {
public:
    int solve(int n,vector<int>&memo){
        if(memo[n]==-1){
        int res;
        if(n==1) res= 1;
        else if(n==2) res=  2;
        else if(n==3) res=  5;
        else if(n==4) res=  11;
        else{
            res=(2*solve(n-1,memo)%1000000007+solve(n-3,memo)%1000000007)%1000000007;
        }
        memo[n]=res;
        }
        return memo[n];
    }
    int numTilings(int n) {
        vector<int>memo(n+1,-1);
        return solve(n,memo);
    }
};