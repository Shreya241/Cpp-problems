class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>v;
        set<int>s;
        for(auto it:mp){
            v.push_back(it.second);
            s.insert(it.second);
        }
        if(v.size()!=s.size()) return false;
        else return true;
    }
};