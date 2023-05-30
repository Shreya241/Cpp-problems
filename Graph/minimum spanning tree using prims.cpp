//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<bool>mset(V,false);
        vector<int>key(V,INT_MAX);
        int result=0;
        key[0]=0;
        for(int count=0;count<V;count++)
        {
            int u=-1;
            for(int i=0;i<V;i++)
            {
                if(!mset[i] && (u==-1 || key[i]<key[u]))
                u=i;
            }
            mset[u]=true;
            result+=key[u];
            for(auto it: adj[u])
            {
                if(!mset[it[0]])
                {
                    key[it[0]]=min(key[it[0]],it[1]);
                }
            }
        }
        return result;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends