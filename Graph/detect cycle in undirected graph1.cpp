//{ Driver Code Starts bfs
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    bool check(int src,vector<int> adj[],vector<int>&vis){
      vis[src]=1;
      queue<pair<int,int>>q;
      q.push({src,-1});
      while(!q.empty()){
          int node=q.front().first;
          int par=q.front().second;
          q.pop();
          for(auto x:adj[node]){
              if(!vis[x]){
                  vis[x]=1;
                  q.push({x,node});
              }else if(par!=x){
                  return true;
              }
          }
      }
      return false;
  }
    
    bool isCycle(int V, vector<int> adj[]) {
       vector<int>vis(V,0);
       for(int i=0;i<V;i++){
           if(!vis[i]){
               if(check(i,adj,vis)){
                   return true;
               }
           }
       }
       return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends