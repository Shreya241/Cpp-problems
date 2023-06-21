class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>v;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;
    }
};