#include<iostream>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while(t--){
    long long x,y,z;
    cin>>x>>y>>z;
    long long k=max(x,y);
    k=max(k,z);
    if(x==y && x==k){
        cout<<"YES"<<endl;
        cout<<k<<" "<<z<<" "<<z<<endl;
    }else if(y==z && y==k){
        cout<<"YES"<<endl;
        cout<<k<<" "<<x<<" "<<x<<endl;
    }else if(z==x && z==k){
        cout<<"YES"<<endl;
        cout<<k<<" "<<y<<" "<<y<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
}