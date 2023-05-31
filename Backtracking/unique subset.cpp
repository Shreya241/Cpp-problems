//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    void solve(vector<int> arr,int n,int ind,set<vector<int>> &ans,vector<int> &temp){
        if(ind==n){
            ans.insert(temp);
            return;
        }
        temp.push_back(arr[ind]);
        solve(arr,n,ind+1,ans,temp);
        temp.pop_back();
        solve(arr,n,ind+1,ans,temp);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        set<vector<int>>ans;
        vector<int>temp;
        solve(arr,n,0,ans,temp);
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
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
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
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