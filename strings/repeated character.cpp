#include<bits/stdc++.h>
#include<stack>
#include <string>
#include <algorithm>
using namespace std;
char para(string s){
   char ans;
   int n=s.size();
   map<char,int>mp;
   for(int i=0;i<n;i++){
    mp[s[i]]++;
   }
   for(auto i:s){
     if(mp[i]>1){
        ans=i;
        break;
     }
   }
   return ans;
}

int main(){
   string str="geeksforgeeks";
   cout<<para(str);
}