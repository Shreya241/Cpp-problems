//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string s) {
       reverse(s.begin(),s.end());
        stack<string>st;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                string ch;
                ch+=s[i];
                st.push(ch);
            }else{
                string a=st.top();st.pop();
                string b=st.top();st.pop();
                string curr='('+a+s[i]+b+')';
                st.push(curr);
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends