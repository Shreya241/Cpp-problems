class Solution {
public:

    void dfs(int i,int j, int n,int m,vector<vector<char>>&board){
        if(i<0 || j<0 ||i>n || j>m) return;
        if(board[i][j]=='X' || board[i][j]=='1'){
            return;
        }
        board[i][j]='1';
        dfs(i, j-1, n, m, board);
        dfs(i, j+1, n, m, board);
        dfs(i-1, j, n, m, board);
        dfs(i+1, j, n, m, board);
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 ||j==0 || j==m-1 )&& board[i][j]=='O'){
                    dfs(i,j,n-1,m-1,board);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='1') board[i][j]='O';
            }
        }
    }
};