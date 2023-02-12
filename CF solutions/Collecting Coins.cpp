#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;cin>>t;
    while(t--){
  int a,b,c;cin>>a>>b>>c;
  int n;cin>>n;
  int x=max(a,b);
  x=max(x,c);
  int s=a+b+c+n;
  if(s%3==0 && s/3>=x){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
}