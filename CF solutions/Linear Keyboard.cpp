#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
    string s;cin>>s;
    string w;cin>>w;
    int d=0;
    for(int i=0;i<w.length()-1;i++){
        int p=s.find(w[i]);
        int q=s.find(w[i+1]);
        d+=abs(p-q);
    }
    cout<<d<<endl;
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