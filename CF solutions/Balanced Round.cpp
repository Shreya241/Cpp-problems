#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int ctr=1;
  int mc=1;
  for(int i=1;i<n;i++){
    if(v[i]-v[i-1]<=k){
        ctr++;
    }else{
        ctr=1;
    }
    mc=max(mc,ctr);
  }
  cout<<n-mc<<endl;
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