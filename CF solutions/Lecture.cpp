#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;cin>>n;
  int m;cin>>m;
 map<string,string>mp;
  for(int i=0;i<m;i++){
    string s;cin>>s;
    string p;cin>>p;
    mp[s]=p; 
  }
  for(int i=0;i<n;i++){
    string str;cin>>str;
    string y=mp[str];
    if(str.size()<=y.size()){
        cout<<str<<" ";
    }else{
        cout<<y<<" ";
    }
  }
}