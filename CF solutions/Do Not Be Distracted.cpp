#include<iostream>
#include<map>
using namespace std;
 
string check(string str,int n){
    map<char,int>m;
    for(int i=0;i<n;i++){
      if(i!=0){
      if((str[i]!=str[i-1])&&(m[str[i]]>0)){
        return "no";
        break;
      }
      }
      m[str[i]]++;
    }
    return "yes";
}
 
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    cout<<check(str,n)<<endl;
  }
}