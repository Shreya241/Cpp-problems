#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
   int t;cin>>t;
   while(t--){
  int a,b,n;cin>>a>>b>>n;
  int c=1;
  if(n==1){
    cout<<"YES"<<endl;
    continue;
  }
  while(a%2==0){
     c*=2;
     a=a/2;
  }
  while(b%2==0){
    c*=2;
    b=b/2;
  }
  if(c>=n){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
}