#include<bits/stdc++.h>
using namespace std;

int isSparse(int n){
    bool ans=false;
    while(n>0){
       if(((n&1)==1)&&((n>>1)&1==1)){
           ans=false;
           break;
       }else{
           ans= true;
       }
       n=n>>1;
   }
   return ans;
}

int main()
{
    int n;
    cin >> n;
    if(isSparse(n)){
        cout<<"1";
    }else{
        cout<<"0";
    }
}