
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
  int t;cin>>t;
  while(t--){
    long long int n,x,k;cin>>n;
    k=3;
    if(n%k==0){x=n/k;}
    while(n%k!=0){
      k=(k+1)*2-1;
      if(n%k==0){x=n/k;}
    }
    cout<<x<<endl;
  }
}