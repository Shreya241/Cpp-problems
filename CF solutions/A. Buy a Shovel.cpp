#include<iostream>
#include<map>
using namespace std;
 
int main(){
   int n;cin>>n;
   int r;cin>>r;
   int i=1;
   bool k=false;
   while(k!=true){
      int x=(n*i)%10;
      if(x==r || x==0) k=true;
      else i++;
   }
   cout<<i;
}