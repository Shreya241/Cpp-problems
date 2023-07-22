#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  vector<int>v(3);
  for(int i=0;i<3;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  if(v[1]+v[2]>=10) cout<<"YES"<<endl;
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