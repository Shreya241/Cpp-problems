#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 
int main(){
  int t;cin>>t;
  while(t--){
  int a,b,c;cin>>a>>b>>c;
  int m=max(a,max(b,c));
  int mi=min(a,min(b,c));
  if(a<m && a>mi){
    cout<<a<<endl;
  }else if(b<m && b>mi){
    cout<<b<<endl;
  }else{
    cout<<c<<endl;
  }
}
}