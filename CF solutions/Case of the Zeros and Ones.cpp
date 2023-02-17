#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;cin>>n;
  string s;cin>>s;
  int o=0,z=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
        z++;
    }else{
        o++;
    }
  }
  cout<<abs(z-o);
}