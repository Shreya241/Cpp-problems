#include<iostream>
#include <sstream>
#define int long long 
using namespace std;
 
 
void funct(){
    int n;cin>>n;
    char d;cin>>d;
    string str;cin>>str;
    string s="";
    int i=0;
    while((int)str[i]>=(int)d){
        s=s+str[i];
        i++;
    }
    s=s+d;
    while(i<n){
        s=s+str[i];
        i++;
    }
    cout<<s<<endl;
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