#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   int n,k,l;
   cin>>n>>k>>l;
   vector<pair<int,int> >v;
   for(int i=0;i<n;i++){
    int m,l;
    cin>>m>>l;
    v.push_back(make_pair(m,l));
   }
   sort(v.rbegin(),v.rend());
   int ans=0;
   for(int i=0;i<v.size();i++){
    if(k>0){
        if(v[i].second==l){
            ans+=v[i].first;
            k--;
        }
    }
   }
   if(ans==0 || k!=0) cout<<-1<<endl;
   else cout<<ans<<endl;
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