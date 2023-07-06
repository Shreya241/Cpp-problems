#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   vector<int>a(3);
   vector<int>b(3);
   for(int i=0;i<3;i++){
    cin>>a[i];
   }
   for(int i=0;i<3;i++){
    cin>>b[i];
   }
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   int B=b[1]+b[2];
   int A=a[1]+a[2];
   if(A>B) cout<<"Alice"<<endl;
   else if(A==B) cout<<"Tie"<<endl;
   else cout<<"Bob"<<endl;
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