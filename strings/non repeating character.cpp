#include <bits/stdc++.h>
using namespace std;

string reverse_s(string s){
  string ans="";
  string res="";
  int i=s.size()-1;
  while(i>=0){
    while((i>=0)&&(s[i]!='.')){
        res.push_back(s[i]);
        i--;
    }
    reverse(res.begin(),res.end());
    for(int j=0;j<res.size();j++){
        ans.push_back(res[j]);
    }
    res.clear();
    i--;
    ans.push_back('.');
  }
  ans.pop_back();
  return ans;
}

int main(){
  string s="i.like.this.program.very.much";
  cout<<reverse_s(s);    
}
