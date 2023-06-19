//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
  public:
  bool isopd(char ch){
      return (ch>='a' and ch <='z') || (ch >= 'A' and ch <= 'Z') || (ch >= '0' and ch <= '9');
  }
    string postToInfix(string s) {
        stack<string>st;
        for(int i=0;i<s.length();i++){
            if(isopd(s[i])){
                string t="";
                t+=s[i];
                   st.push(t);
            }else{
                string a=st.top();st.pop();
                string b=st.top();st.pop();
                st.push('('+b+s[i]+a+')');
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
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends