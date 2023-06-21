#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  int n;cin>>n;
  vector<int>v;
  int sum=0;
  int c=0;
  for(int i=0;i<n;i++){
    int k;cin>>k;
    if(k!=0)v.push_back(k);
    sum+=abs(k);
  }
  if(v.size()>0){
  int prev=v[0];
  for(int i=1;i<v.size();i++){
    if(v[i]>0 && prev<0){
        c++;
    }
    prev=v[i];
  }
  if(v[v.size()-1]<0) c++;
  cout<<sum<<" "<<c<<endl;
  }else{
    cout<< 0<<" "<<0<<endl;
  }
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) funct();
    return 0;
}