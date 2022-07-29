#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool para(string str){
  int n=str.size();
  bool f=true;;
  sort(str.begin(),str.end());
  for(int i=1;i<n;i++){
    if(str[i]==str[i-1]){
        f= false;
    }
  }
  return f;
}

int main(){
    string str = "foodr";
    cout<<para(str);
}