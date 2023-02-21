#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
 cin>>n;
 while(n--){
   int m;cin>>m;
   if(m>=1900){
    cout<<"Division 1"<<endl;
   }else if(1600<=m && m<=1899){
    cout<<"Division 2"<<endl;
   }else if(1400<=m && m<=1599){
    cout<<"Division 3"<<endl;
   }else{
    cout<<"Division 4"<<endl;
   }
 }
}