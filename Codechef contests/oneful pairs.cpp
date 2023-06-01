#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   int a,b;
   cin>>a>>b;
   if((a+b+(a*b))==111){
    cout<<"Yes"<<endl;
   }else{
    cout<<"No"<<endl;
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