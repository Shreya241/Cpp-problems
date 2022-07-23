#include <bits/stdc++.h>
using namespace std;

char dup(string s){
  map<char,int>m;
  for(int i=0;i<s.size();i++){
    m[s[i]]++;
  }
  for(int j=0;j<s.size();j++){
    if(m[s[j]]==1){
      return s[j];
    }
  }
  return '$';
}

int main(){
  string s="hello";
  cout<<dup(s);    
}
