#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool para(string str,string patt,int k){
    int n1=str.length();
    int n2=patt.length();
    if(n1!=n2){
        return false;
    }
    unordered_map<char,int>mp;
    for(int i=0;i<n1;i++){
        mp[str[i]]++;
    }
    int k1=0;
    for(int i=0;i<n2;i++){
        if(mp[patt[i]]==0){
            k1++;
        }else{
            mp[patt[i]]--;
        }
    }
    return k1<=k;
}

int main(){
    int k=2;
    string str = "fodr";
    string patt="gork";
    cout<<para(str,patt,k);
}