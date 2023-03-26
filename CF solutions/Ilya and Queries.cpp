#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
    string s;cin>>s;
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        int c=0;
        for(int i=a-1;i<b-1;i++){
            if(s[i]==s[i+1]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--) funct();
    return 0;
}