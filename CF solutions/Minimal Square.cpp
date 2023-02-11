#include<iostream>
#include <numeric>
#include<algorithm>  
using namespace std;
 
 
int main(){
  int t;
  cin>>t;
  while(t--){
   int a,b;
   cin>>a>>b;
   int s=min(a,b);
   int q=max(a,b);
   int l=s+s;
   int f=max(l,q);
   cout<<f*f<<endl;
  }
}