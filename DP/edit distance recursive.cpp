//recursive
//https://www.codingninjas.com/codestudio/problems/edit-distance_630420?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
int solve(string s, string t,int i,int j){
    if(i<0) return j+1;
    if(j<0) return i+1;

    if(s[i]==t[j]) return solve(s,t,i-1,j-1);
    else{
        int insert=1+solve(s,t,i,j-1);
        int del=1+solve(s,t,i-1,j);
        int repl=1+solve(s,t,i-1,j-1);
        return min(insert,min(del,repl));
    }
}


int editDistance(string str1, string str2)
{
    int n=str1.size();
    int m=str2.size();
    return solve(str1,str2,n-1,m-1);
}
//memoization

int solve(string &s, string &t,int i,int j,vector<vector<int>>&dp){
    if(i<0) return j+1;
    if(j<0) return i+1;

if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[j]) return dp[i][j]=solve(s,t,i-1,j-1,dp);
    else{
        return dp[i][j]= 1+min(solve(s,t,i,j-1,dp),min(solve(s,t,i-1,j,dp),solve(s,t,i-1,j-1,dp)));
    }
}


int editDistance(string str1, string str2)
{
    int n=str1.size();
    int m=str2.size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return solve(str1,str2,n-1,m-1,dp);
}

//tabulation


int editDistance(string s, string t)
{
    int n=s.size();
    int m=t.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++){
        dp[i][0]=i;
    }
    for(int j=0;j<=m;j++){
        dp[0][j]=j;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
            else{
                dp[i][j]= 1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
    }
    return dp[n][m];
}

//space optimised


int editDistance(string s, string t)
{
    int n=s.size();
    int m=t.size();
    vector<int>prev(m+1,0);
    vector<int> cur(m+1,0);
    for(int j=0;j<=m;j++){
        prev[j] = j;
    }

    for(int i=1;i<=n;i++){
        cur[0]=i;
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]) cur[j]=prev[j-1];
            else{
                cur[j]= 1+min(prev[j-1],min(prev[j],cur[j-1]));
            }
        }
        prev=cur;
    }
    return cur[m];
}