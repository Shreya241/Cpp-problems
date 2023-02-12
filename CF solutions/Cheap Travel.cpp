#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
  float n,m,a,b;cin>>n>>m>>a>>b;
  float k=b/m;
  int p=0,i=0,j=0;
  if(k<a){
    while(n>0){
        n=n-m;
        p+=b;
        }
  }
    while(n>0 ){
        n--;
        i+=a;
        j+=b;
    }
    if(j<i){
        p+=j;
    }else{
        p+=i;
    }
  cout<<p;
}