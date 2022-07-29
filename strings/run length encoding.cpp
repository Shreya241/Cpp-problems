#include <bits/stdc++.h>
using namespace std;

void dup(string s){
  int i=0;
  string ans;
  int count=1;
  while(i<s.size()){
    if(s[i+1]==s[i]){
        count++;
    }else{
        ans+=s[i];
        ans+=count+'0';
        count=1;
    }
    i++;
  }
  cout<<ans;
}

int main(){
  string s="aaaabbbccc";
  dup(s);    
}
