#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  int n,x;cin>>n;cin>>x;
  int sum=n*x;
  int c=0;
  while(sum>0){
    sum=sum/10;
    c++;
  }
  if(c==5) cout<<"YES"<<endl;
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