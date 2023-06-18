class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        stack<int>st;
        for(int i=0;i<v.size();i++){
            if(v[i]>0 || st.empty()) st.push(v[i]);
            else{
                while(!st.empty() && st.top()>0 && st.top()<-v[i]){
                    st.pop();
                }
                if(!st.empty() && st.top()==-v[i]){
                    st.pop();
                }else{
                    if(st.empty() || st.top()<0){
                        st.push(v[i]);
                    }
                }
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};