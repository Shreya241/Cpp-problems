class Solution {
public:
    vector<int>r = {-1, 1, 0, 0};
    vector<int>c = {0, 0, -1, 1};

    bool isAtBorder(vector<vector<char>>& m,int nx,int ny){
        if(nx==0 || nx==m.size()-1) return true;
        if(ny==0 || ny==m[0].size()-1) return true;
        return false;
    }
    bool isValid(vector<vector<char>>& m,int nx,int ny){
        int p=m.size();
        int q=m[0].size();
        if(nx<0 || ny<0 || nx>=p || ny>=q || m[nx][ny]=='+') return false;
        else return true;
    }
    int nearestExit(vector<vector<char>>& m, vector<int>& e) {
        queue<pair<int,int>>q;
        q.push({e[0],e[1]});
        int ans=0;
        m[e[0]][e[1]]='+';
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nx=x+r[i];
                    int ny=y+c[i];
                    if(isValid(m,nx,ny)){
                        m[nx][ny]='+';
                        if(isAtBorder(m,nx,ny)) return ans+1;
                        else q.push({nx,ny});
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};