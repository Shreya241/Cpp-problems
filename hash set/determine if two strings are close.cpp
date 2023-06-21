class Solution {
public:
    bool closeStrings(string a, string b) {
        map<char,int>mp1,mp2;
        for(int i=0;i<a.size();i++){
            mp1[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            mp2[b[i]]++;
        }
        set<char>s1,s2;
        vector<int>v1,v2;
        for(auto it:mp1){
            v1.push_back(it.second);
            s1.insert(it.first);
        }
        for(auto it:mp2){
            v2.push_back(it.second);
            s2.insert(it.first);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        if(s1!=s2) return false;
        else return true;
    }
};