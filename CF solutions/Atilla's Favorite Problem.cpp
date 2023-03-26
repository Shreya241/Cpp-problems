#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
    int n;cin>>n;
    string s;cin>>s;
    sort(s.begin(),s.end());
    int p=s[n-1];
    cout<<p-96<<endl;
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