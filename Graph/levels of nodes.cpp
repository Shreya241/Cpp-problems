//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    queue<pair<int,int>>q;
	    vector<bool>vis(V+1,false);
	    if(X==0) return 0;
	    q.push({0,0});
	    vis[0]=true;
	    while(!q.empty()){
	        int x=q.front().first;
	        int d=q.front().second;
	        q.pop();
	        if(x==X){
	            return d;
	        }
	        for(auto it:adj[x]){
	            if(vis[it]==false){
	            q.push({it,d+1});
	            vis[it]=true;
	            }
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends