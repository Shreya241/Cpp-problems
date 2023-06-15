class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>v(n);
        v[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]=max(v[i+1],prices[i]);
        }

        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,v[i]-prices[i]);
        }
        return ans;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyAtPrice = INT_MAX;
        int maxProfit = 0;
        for(int i=0; i<n; i++){
            buyAtPrice = min(buyAtPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - buyAtPrice); 
        }
        return maxProfit;
    }
};