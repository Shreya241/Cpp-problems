#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  if(n==1) cout<< 0<<endl;
  else{
    int ans=0;int i=0,j=n-1;
    while(i<j){
        ans+=v[j]-v[i];
        i++;j--;
    }
  cout<< ans<<endl;
  }
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