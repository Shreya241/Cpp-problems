class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int ms=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }else{
                if(!st.empty()){
                    st.pop();
                }
                if(!st.empty()){
                    ms=max(ms,i-st.top());
                }else{
                    st.push(i);
                }
            }
        }
        return ms;
    }
};