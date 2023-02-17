#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;cin>>n;
  while(n--){
    long long x,y;cin>>x>>y;
    long long a,b,c=0;cin>>a>>b;
    if(x==0 && y==0){
        cout<<0<<endl;
        continue;
    }else{
        if(x<y){
            c+=((y-x)*a);
            y=y-(y-x);
            c+=min((x*b),(2*x*a));
        }else if(x>y){
            c+=((x-y)*a);
            x=x-(x-y);
            c+=min((x*b),(2*x*a));
        }else if(x==y){
            c+=min((x*b),(2*x*a));
        }
    }
    cout<<c<<endl;
  }
}