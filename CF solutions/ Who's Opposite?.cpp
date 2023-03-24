#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
    int a,b,c;cin>>a>>b>>c;
    int value=abs(a-b)*2;
    if(a>value || b>value || c>value){
        cout<<-1<<endl;
    }else{
       int d=c+abs(a-b);
       if(d>value){
          cout<<c-abs(a-b)<<endl;
       }
       else{
        cout<<d<<endl;
       }
    }
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    //int t = 1;
    cin >> t;
    while(t--) funct();
    return 0;
}