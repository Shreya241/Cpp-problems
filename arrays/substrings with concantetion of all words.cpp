class Solution {
public:
    unordered_map<string, int> mp;
    bool sol(string s, int i, int m,int n){
        int c=0;
        unordered_map<string, int>mp2=mp;
        for(int ind=i;ind<i+m*n;i+=m){
            string curr=s.substr(i,m);
            if(mp2.find(curr)!=mp2.end()){
                mp2[curr]--;
                if(mp2[curr]==0) mp2.erase(curr);
                c++;
            }else break;
        }
        return c==n;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=words.size();
        int m=words[0].size();
        for(auto it:words){
            mp[it]++;
        }
        vector<int>ans;
        for(int i=0;i<s.size()-m*n+1;i++){
            if(sol(s,i,m,n))ans.push_back(i);
        }
        return ans;
    }
};