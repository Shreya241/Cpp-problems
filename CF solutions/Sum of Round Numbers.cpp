#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
 
int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int c=0;
    vector<int>v;
    while(n>0){
        int k=n%10;
        if(k!=0)c++;
        v.push_back(n%10);
        n=n/10;
    }
    cout<<c<<endl;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            cout<<v[i]*pow(10,i)<<" ";
        }
    }
    cout<<endl;
  }
}