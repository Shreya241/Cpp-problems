#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int para(string s,string p){
   int m=s.size();
   int n=p.size();
   unordered_map<char,int>mp;
   for(int i=0;i<m;i++){
     mp[s[i]]++;
   }
   for(int j=0;j<n;j++){
    mp[p[j]]++;
   }
   return mp.size();
}

int main(){
   string s="abcd";
   string p="cdef";
    cout<<para(s,p);
}