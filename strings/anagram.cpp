#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


bool para(std::string s,std::string p){
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    if(s==p){
      return 1;
    }else{
      return 0;
    }
}

int main(){
    std::string s="geeksforgeeks";
    std::string p="forgeeksgeeks";
    cout<<para(s,p);
}