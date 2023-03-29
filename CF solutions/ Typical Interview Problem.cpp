#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
    string s1="FBFFBFFBFBFFBFFBFBFFBFFB";
    int n;cin>>n;
    string str;cin>>str;
    if(s1.find(str)!= string::npos){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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