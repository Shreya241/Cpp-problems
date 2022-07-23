#include <bits/stdc++.h>
#include<stack>
using namespace std;

int dup(string s)
{
stack<int> stack;
        stack.push(-1);
        int result = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                stack.push(i);
            }
            else{
                stack.pop();
                
                if(not stack.empty()){
                    cout<<stack.top();
                    result = max(result, i-stack.top());
                }
                else{
                    stack.push(i);
                }
            }
        }
        
        return result;
}

int main()
{
  string s = ")(";
  cout<<dup(s);
}
