#include<bits/stdc++.h>
#include<stack>
using namespace std;
int para(string s){
    int n=s.size();
    int count=0;
    stack<char>stack;
    int c=0;
    for(int i=0;i<n;i++){
      stack.push(s[i]);
    }
   while(!stack.empty()){
    if(stack.top()=='{'){
        stack.top()=='}';
        count++;
    }
   }
}

int main(){
   string s="}{{}}{{{";
    cout<<para(s);
}