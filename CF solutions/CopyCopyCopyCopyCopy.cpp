#include<bits/stdc++.h>
using namespace std;
 
int main(){
   long long t;cin>>t;
   while(t--){
    long long n,c;cin>>n;
    set<long long>s;
    for(long long i=0;i<n;i++){
       cin>>c;
       s.insert(c);
   }
   cout<<s.size()<<endl;
}
}