https://leetcode.com/problems/isomorphic-strings/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp,mp1;
        if (s.size()!=t.size())return false;
        for (int i=0; i<s.size(); i++){
            if (mp.find(s[i])!=mp.end()){
                if (mp[s[i]]!= t[i])return false;
            }
            else if (mp1.find(t[i])!=mp1.end()){
                if (mp1[t[i]]!=s[i])return false;
            }
            else{
                mp[s[i]]= t[i];
                mp1[t[i]]=s[i];
            }
        }
            return true;
    }
};