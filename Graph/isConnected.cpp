class Solution {
public:
    void dfs(vector<vector<int>>& c,int i,vector<int>&vis,int n){
        if(vis[i]==1) return;
        vis[i]=1;
        for(int j=0;j<n;j++){
            if(c[i][j]==1) dfs(c,j,vis,n);
        }
    }
    int findCircleNum(vector<vector<int>>& c) {
      int n=c.size();  
      vector<int>vis(n,0);
      int ans=0;
      for(int i=0;i<n;i++){
          if(vis[i]==0){
              ans++;
              dfs(c,i,vis,n);
          }
      }
      return ans;
    }
};