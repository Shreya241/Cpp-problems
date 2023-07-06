#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   int n, q;
        cin >> n >> q;

        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    sort(v.begin(), v.end());
    while(q--){
        int k;
        cin>>k;
        int p;
        if(k>3)p=k/3;
        else p=0;
        if(p==n) cout<<v[p-1]<<endl;
        else cout<<v[p]<<endl;
    }    
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