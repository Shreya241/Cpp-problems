class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> ans(m, vector<int>(n, 0));

    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            unordered_set<int>s;
            int x=r,y=c;
            while(x+1<m && y+1<n){
                s.insert(grid[x+1][y+1]);
                x++,y++;
            }
            unordered_set<int>a;
            int p=r,q=c;
            while(p-1>=0 && q-1>=0){
               a.insert(grid[p-1][q-1]);
                p--,q--;
            }
            int u=s.size();
            int b=a.size();
            ans[r][c] = abs(u - b);
        }
    }

    return ans;
    }
};