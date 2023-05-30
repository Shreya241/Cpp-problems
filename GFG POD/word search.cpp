class Solution {
public:
    bool isWordExist(vector<vector<char>>& grid, string word) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int delrow[] = {0,-1,0,+1};
        int delcol[] = {-1,0,+1,0};
        int idx{0};
        queue<pair<pair<int,int>,int>> q;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(grid[i][j] == word[0]){
                    idx=0; 
                    q.push({{i,j},idx});
                }
                
                
                while(!q.empty()){
                    int row = q.front().first.first;
                    int col = q.front().first.second;
                    int idx=q.front().second;
                    idx++;
                    q.pop();
                    if(idx>=word.size()){
                        return true;
                    }
                    visited[row][col]=1;
                    
                    for(int ind=0;ind<4;ind++){
                        int nrow = row + delrow[ind];
                        int ncol = col + delcol[ind];
                        
                        if(nrow >=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==word[idx] && visited[nrow][ncol]!=1){
                            q.push({{nrow,ncol},idx});
                        }
                    }
                }
                
            }
             
         }
         return false;
    }
};