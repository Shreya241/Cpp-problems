//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    int solve(int n,int x,int y, int z, int dp[]){
        if(n<=0) return 0;
        if(dp[n]!=-1) return dp[n];
        
           int op1=INT_MIN,op2=INT_MIN,op3=INT_MIN;
        if(n>=x) op1= solve(n-x,x,y,z,dp);
        if(n>=y) op2= solve(n-y,x,y,z,dp);
        if(n>=z) op3= solve(n-z,x,y,z,dp);
        
        dp[n]=1+max(op1, max(op2,op3));
        return dp[n];
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        int a= solve(n,x,y,z,dp);
        if(a<0)return 0;
        return a;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends