#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   int a,b,c;
   cin>>a>>b>>c;
   int empty=0,full=0;
   if(a==1){
    full++;
   }else if(a==0){
    empty++;
   }
   if(b==1){
    full++;
   }else if(b==0){
    empty++;
   }
   if(c==1){
    full++;
   }else if(c==0){
    empty++;
   }
   if(empty>full){
    cout<<"Water filling time"<<endl;
   }else{
    cout<<"Not now"<<endl;
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