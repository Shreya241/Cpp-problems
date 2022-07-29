#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int para(string str,string patt){
    int o,p=INT_MAX;
    for(int i=0;i<patt.size();i++){
        for(int j=0;j<str.size();j++){
            if(patt[i]==str[j]){
                o=j;
                p=min(o,p);
            }
        }
    }
    if(p<INT_MAX){
    return p;
    }else{
        return -1;
    }
}

int main(){
    string str = "geeks";
    string patt="set";
    cout<<para(str,patt);
}