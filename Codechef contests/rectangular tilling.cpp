#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   int length, weidth;
   cin>>length>>weidth;
   string ans;
   if(weidth%2==0){
    ans="Yes";
   }else if(length%2==0){
    ans="Yes";
   }else{
    ans="No";
   }
   cout<<ans<<endl;
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