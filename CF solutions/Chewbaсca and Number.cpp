#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;cin>>n;
    vector<int>v;
    while(n>0){
        v.push_back(n%10);
        n=n/10;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>=5){
            v[i]=9-v[i];
        }
    }
    if(v[v.size()-1]==0){
        v[v.size()-1]=9;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}