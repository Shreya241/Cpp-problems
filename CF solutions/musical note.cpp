#include <bits/stdc++.h>  
#include <string>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   string str;
   cin>>str;
   set<string>s;
   for(int i=0;i<str.size()-1;i++){
    string p="";
    p=p+str[i]+str[i+1];
    s.insert(p);
   }
   cout<<s.size()<<endl;
}
}
