#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 
int main(){
  string s;cin>>s;
  int ans=0;
  char ch='a';
  for(int i=0;i<s.size();i++){
    int l1=abs(s[i]-ch);
    int l2=26-abs(l1);
    ans+=min(l1,l2);
    ch=s[i];
    }
  cout<<ans;
}