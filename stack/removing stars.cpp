class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                st.push(s[i]);
            }else if(s[i]=='*' && !st.empty()){
                st.pop();
            }
        }
        string ans="";
        while(!st.empty()){
            char p=st.top();
            st.pop();
            ans.push_back(p);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};