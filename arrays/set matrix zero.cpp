class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<pair<int,int>>p;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    p.push_back(make_pair(i,j));
                }
            }
        }
        for(auto it:p){
            int a=it.first;
            int b=it.second;
            for(int i=0;i<m[0].size();i++){
                m[a][i]=0;
            }
            for(int i=0;i<m.size();i++){
                m[i][b]=0;
            }
        }
    }
};