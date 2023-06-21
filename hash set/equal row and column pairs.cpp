class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        map<vector<int>,int>mp,pq;
        for(int i=0;i<n;i++){
            mp[grid[i]]++;
        }
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(grid[j][i]);
            }
            pq[temp]++;
        }
        for(auto it:mp){
            if(pq.find(it.first)!=pq.end()){
                ans+=(it.second)*pq[it.first];
            }
        }
        return ans;
    }
};