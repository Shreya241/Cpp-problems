//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    
    void sol(string s, string &maxs, int k, int idx){
        if(k==0){
            return;
        }
        int n=s.size();
        char maxc=s[idx];
        for(int i=idx+1;i<n;i++){
            if(maxc<s[i]){
                maxc=s[i];
            }
        }
        if(maxc!=s[idx]){
            k-=1;
        }
        for(int i=idx;i<n;i++){
            if(s[i]==maxc){
                swap(s[i],s[idx]);
                if(s.compare(maxs)>0){
                    maxs=s;
                }
                sol(s,maxs,k,idx+1);
                swap(s[i],s[idx]);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
       string maxs=str;
       sol(str,maxs,k,0);
       return maxs;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}

// } Driver Code Ends