class Solution {
public:
    bool canConstruct(string a, string b) {
        map<char,int>mp1,mp2;
        for(int i=0;i<b.size();i++){
            mp2[b[i]]++;
        }
        for(int i=0;i<a.size();i++){
            mp1[a[i]]++;
        }
       for(auto it:mp1){
           if(mp2.find(it.first)==mp2.end() || it.second>mp2[it.first]){
               return false;
           }
           }
        return true;
    }
};