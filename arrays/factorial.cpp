#include<bits/stdc++.h>
using namespace std;

void fact(int n){
   int tot=1;
   int i=1;
   while(i<=n){
      tot*=i;
      i++;
   }
   cout<<tot;
}

int main(){
int n=5;
fact(n);
}