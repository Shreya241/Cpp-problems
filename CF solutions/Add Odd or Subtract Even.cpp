#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;cin>>t;
    while(t--){
  int a,b;cin>>a>>b;
  if(a-b==0){
    cout<<0<<endl;
  }else if((b-a)%2==0){
    if(b-a >0){
        cout<<2<<endl;
    }else{
        cout<<1<<endl;
    }
  }else if((b-a)%2!=0){
    if(b-a >0){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
  }
}
}