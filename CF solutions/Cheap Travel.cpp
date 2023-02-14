#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
  int n,m,a,b;cin>>n>>m>>a>>b;
  int c=0;
  while(n>0){
    if(a==1){
      if(a*n>b/m){
      cout<<b;}
      else cout<<a*n;
      return 0;
    }
    else if(b/m<=a){
      if(n%m==0){
        n=n-m;
        c+=b;
      }else if(b>a){
        n--;
        c+=a;
      }else{
        n=n-m;
        c+=b;
      }
    }else{
      cout<<n*a;
      return 0;
    }
  }
  cout<<c;
}