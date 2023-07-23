class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int m=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            m=min(m,p[i]);
            ans=max(ans,p[i]-m);
        }
        return ans;
    }
};