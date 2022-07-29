#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int para(string s,string p){
    vector<int>g(26,0),k(26,0);
    for(auto a:s){
        g[a-'a']++;
    }
    for(auto b:p){
        k[b-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        count+=abs(g[i]-k[i]);
    }
    return count;
}

int main(){
    string s="bcadeh";
    string p="hea";
    cout<<para(s,p);
}