#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  int n,m;cin>>n;cin>>m;
  int ans=abs(n-m);
  if(ans%2==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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