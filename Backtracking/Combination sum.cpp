//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    
    void solve(vector<int> &A, int B, vector<vector<int>>&ans,vector<int>&v, int sum,int prev){
        if(sum==B){
            ans.push_back(v);
            return;
        }
        if(sum>B){
            return;
        }
        for(int i=0;i<A.size();i++){
            if(prev<=A[i]){
                v.push_back(A[i]);
                solve(A,B,ans,v,sum+A[i],A[i]);
                v.pop_back();
            }
        }
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        int prev=0;
        solve(A,B,ans,v,0,prev);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends