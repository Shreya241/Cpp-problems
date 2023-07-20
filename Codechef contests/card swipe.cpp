#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ms=0;
  map<int,int>mp;
  for(int i=0;i<n;i++){
    if(mp.find(v[i])!=mp.end()){
        mp.erase(v[i]);
    }else{
        mp[v[i]]++;
    }
    int k=mp.size();
    ms=max(ms,k);
  }
  cout<<ms<<endl;
}
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) funct();
    return 0;
}