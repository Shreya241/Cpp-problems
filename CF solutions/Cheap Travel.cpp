#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
  int n,m,a,b;cin>>n>>m>>a>>b;
  int s,c,k;
  if(m>n && b<n*a){
      c=b;
    }
  else if(b/m<a){
    s=n/m;
    c=s*b;
    k=n%m;
    c=min(c+k*a,c+b);
  }else if(b/m==a){
    c=n*a;
  }else{
    c=a*n;
  }
  cout<<c;
}