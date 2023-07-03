class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        ans.push_back(arr[0]);
        int k=0;
        for(int i=1;i<arr.size();i++){
            if(ans[k][1]>=arr[i][0]){
                ans[k][1]=max(arr[i][1],ans[k][1]);
            }
            else{
                ans.push_back(arr[i]);
                k++;
            }
        }
        return ans;
    }
};