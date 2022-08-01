#include<bits/stdc++.h>
#include<stack>
#include <string>
#include <algorithm>
using namespace std;
vector <string> para(string s[],int n){
   vector<string>t;
   int ma=0;
    map<string,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
        ma=max(ma,m[s[i]]);
    } 
    for(auto it:m){
        if(it.second==ma){
            t.push_back(it.first);
                t.push_back(to_string(it.second));

        }
    }
    return t;
}

int main(){
    int n=5;
   string Votes[] = {"john","johnny","jackie","johnny","john"};
   para(Votes,n);
}