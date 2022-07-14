#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


bool para(string s ,string p){
    int n=s.length();
    char i=s[0],a=s[n-1];
    char j=s[1],b=s[n-2];
    if(((a==p[1])&&(b==p[0])&&(s[0]==p[2]))||((i==p[n-2])&&(j==p[n-1])&&(s[n-1]==p[n-3]))){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    string s="fsbcnuvqhffbsaqxwp";
    string p="wpfsbcnuvqhffbsaqx";
    cout<<para(s,p);
}