#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
   int k;cin>>k;
    int c=0;
    int x;
    map<int,int>mp;
    for(int i=0;i<k;i++){
        cin>>x;
        c+=mp[x-i];
        mp[x-i]++;
    }
    cout<<c<<endl;
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