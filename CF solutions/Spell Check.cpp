#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
 cin>>n;
 string ptr="Timur";
 sort(ptr.begin(), ptr.end());
 while(n--){
    int k;cin>>k;
    string s;cin>>s;
    sort(s.begin(), s.end());
    if(s==ptr){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
 }
}