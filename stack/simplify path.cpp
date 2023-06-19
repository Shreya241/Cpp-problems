class Solution {
public:
    string simplifyPath(string s) {
        stack<string>st;
        for(int i=0;i<s.size();i++){
            string temp;
            if(s[i]=='/'){continue;}
            while(i<s.size() && s[i]!='/'){
                temp+=s[i];
                i++;
            }
            if(temp == ".")
                continue;
            else if(temp == "..")
            {
                if(!st.empty())
                    st.pop();
            }
            else{ 
                st.push(temp);
            }
        }
        string res;
        while(!st.empty()){
            res="/"+st.top()+res;
            st.pop();
        }
        if(res.size() == 0)
            return "/";
        
        return res;
    }
};