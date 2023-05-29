//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    
    void dfs(int src,vector<int>vec[],vector<int>&visited,int &count){
        visited[src] = true;
        
        for(auto e:vec[src]){
            if(!visited[e]){
                count++;
                dfs(e,vec,visited,count);
            }
        }
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    for(int i=0;i<V;i++){
	        int c=0;
	        vector<int>vis(V,false);
	        dfs(i,adj,vis,c);
	        if(c+1==V)
	           return i;
	    }
	    return -1;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends