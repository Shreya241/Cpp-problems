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
   vector<int>q(n);
   q=a;
//    vector<pair<int,int>>v(n);
//    for(int i=0;i<n;i++){
//     v.push_back({a[i],i});
//    }
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   vector<int>ans(n);
   
   for(int i=0;i<n;i++){
    std::vector<int>::iterator itr = std::find(q.begin(), q.end(), a[i]);
    if (itr != q.cend()) {
       int ind=std::distance(q.begin(), itr);
       q[ind]=INT_MAX;
       ans[ind]=b[i];
    }
   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;
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