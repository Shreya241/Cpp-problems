#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  int x,y,r;
  cin>>x>>y>>r;
  float p=r/30;
  float s=x+p;
  float f=s/y;
  int k=f;
  if(f>k)k++;
  cout<<k<<endl;
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