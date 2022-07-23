#include <bits/stdc++.h>
using namespace std;

int dup(string s){
  int l=s.length();
  int t[l+1][l+1];
  for(int i=0;i<=l;i++){
    for(int j=0;j<=l;j++){
        if(i==0){
                 t[i][j]=0;
             }
             if(j==0){
                 t[i][j]=0;
             }
    }
  }

  for(int i=1;i<=l;i++){
    for(int j=1;j<=l;j++){
      if(s[i-1]==s[j-1] and i-1!=j-1){
        t[i][j]=1+t[i-1][j-1];
      }else{
        t[i][j]=max(t[i-1][j],t[i][j-1]);
      }
    }
  }
  return t[l][l];
}

int main()
{
  string s = "axxxy";
  cout<<dup(s);
}
