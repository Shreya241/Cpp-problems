#include<bits/stdc++.h>
#include<string.h>
using namespace std;
char para(string s){
    map<char, int> mp;
       for (int i=0; i<s.size(); i++){
           mp[s[i]]++;
       }
       int max=0;
       char ans;
       for (auto i: mp){
           if (max<i.second){
               max=i.second;
               ans=i.first;
           }
       }
       return ans;
}

int main(){
    string str = "testsample";
    cout<<para(str);
}