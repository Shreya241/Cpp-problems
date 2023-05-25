#include <iostream>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
   int n;cin>>n;
   string ans="";
   if(0<n && n<16){
    ans+="Lower ";
   }else{
    ans+="Upper ";
   }

   if((0<n && n<11) || (15<n && n<26)){
    ans+="Double";
   }else{
    ans+="Single";
   }
   cout<<ans<<endl;
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