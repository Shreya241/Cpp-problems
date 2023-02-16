#include<iostream>
#include<map>
using namespace std;
 
int main(){
 int n,k;
 cin>>n;
 map<string,int>m;
 int i=0;
 while(i<n){
    string s;
    cin>>s;
    m[s]++;
    if(m[s]==1){
        cout<<"OK"<<endl;
    }else{
        int j=m[s]-1;
        cout<<s+to_string(j)<<endl;
    }
    i++;
 }
}