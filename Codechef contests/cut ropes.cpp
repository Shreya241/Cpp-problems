#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
int n;
cin>>n;
int c=0;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    if(b<a) c++;
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