#include <iostream>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
   int n;cin>>n;
   string str;cin>>str;
   char r='A';
   int a=0,b=0;
   for(int i=0;i<n;i++){
    if(str[i]=='A' && r=='A'){
        a++;
    }else if(str[i]=='B' && r=='B'){
        b++;
    }else{
        r=str[i];
    }
   }
   cout<<a<<" "<<b<<endl;
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