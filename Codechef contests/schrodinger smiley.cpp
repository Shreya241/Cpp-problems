#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   int n;cin>>n;
   string s;cin>>s;
   int c=0;
   stack<char>st;
   int i=0;
   while(i<n){
    if(st.empty()){
        if(s[i]==':'){
             st.push(s[i]);
        }
        i++;
    }
    if(!st.empty()){
        if(s[i]==':' && st.top()==':'){
            st.push(s[i]);
            i++;
        }
        if(s[i]==')'){
            st.push(s[i]);
            i++;
        }
        if(s[i]==':' && st.top()==')'){
            c++;
            while(!st.empty()){
                st.pop();
            }
            st.push(s[i]);
            i++;
        }
        if(s[i]=='('){
             while(!st.empty()){
                st.pop();
            }
            i++;
        }
    }
   }
    cout<< c<<endl;
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) funct();
    return 0;
}