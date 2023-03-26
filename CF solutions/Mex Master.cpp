#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
   int n;cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    v.push_back(a);
   }
   sort(v.begin(),v.end());
   
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