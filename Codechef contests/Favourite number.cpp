#include <iostream>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
   int n;
   cin>>n;
   if(n%2==0 && n%7==0){
    cout<<"Alice"<<endl;
   }
   else if(n%2!=0 && n%9==0){
    cout<<"Bob"<<endl;
   }
   else{
    cout<<"Charlie"<<endl;
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