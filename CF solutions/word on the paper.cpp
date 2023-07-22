#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  char v[8][8];
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>v[i][j];
    }
  }
  string t="";
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(v[j][i]!='.'){
        t+=v[j][i];
      }
    }
  }
  cout<<t<<endl;
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