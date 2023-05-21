#include <bits/stdc++.h>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
   int n,k;cin>>n>>k;
   vector<int>a(n);
   vector<int>b(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
   
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({a[i],i});
    }
   sort(v.begin(), v.end());
   sort(b.begin(), b.end());
   vector<int>ans(n);
   
   for(int i=0;i<n;i++){
     int ind = v[i].second;
     ans[ind] = b[i];
   }
   for(int i=0;i<n;i++)cout<<ans[i]<<" ";
   
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