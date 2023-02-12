#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
   int t;cin>>t;
   while(t--){
  int a,b,n;cin>>a>>b>>n;
  if(a%2==0 && b%2==0){
    cout<<"YES"<<endl;
  }else if(a%2!=0 && b%2!=0){
    if(n==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }else if(b%2==0){
    if(b/a>=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }else if(a%2==0){
    if(a/b>=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
}
}