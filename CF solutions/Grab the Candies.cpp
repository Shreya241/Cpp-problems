#include<iostream>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int e=0;int o=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k%2==0){
            e+=k;
        }else{
            o+=k;
        }
    }
    if(e>o){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
}