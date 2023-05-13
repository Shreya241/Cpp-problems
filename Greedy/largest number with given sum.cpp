//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int s)
    {
        string ans="";
        int val=9*n;
        if(val<s){
            return "-1";
        }
        int k=0;
        while(k<n){
            if(s>=9){
                ans+="9";
                k++;
                s=s-9;
            }else if(s>0 && s<9){
                ans+=to_string(s);
                k++;
                s=0;
            }else{
                ans+="0";
                k++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends