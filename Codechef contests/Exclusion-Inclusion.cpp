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
    vector<int>ans(n);
    ans[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        ans[i]=ans[i+1]+v[i];
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