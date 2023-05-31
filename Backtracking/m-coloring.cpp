//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    
    bool isSafe(int node, int color,bool graph[101][101],int n,vector<int>&col){
        for(int k=0;k<n;k++){
            if(k!=node && graph[k][node]==1 && col[k]==color){
                return false;
            }
        }
        return true;
    }
    
    bool dfs(bool graph[101][101], int m, int n, vector<int>&col,int node){
        if(node==n) return 1;
        
        for(int i=1;i<=m;i++){
            if(isSafe(node,i,graph,n,col)==1){
                col[node]=i;
            if(dfs(graph,m,n,col,node+1)==1) return true;
            col[node]=0;
            }
        }
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int>col(n,0);
        if(dfs(graph,m,n,col,0)==true) return true;
        return false;
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends