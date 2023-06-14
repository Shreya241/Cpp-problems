#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
  int n;
  cin>>n;
  vector<int>om(n),addy(n);
  int a=0,b=0;
  int maxo=INT_MIN,maxe=INT_MIN;

  for(int i=0;i<n;i++){
    cin>>om[i];
  }
  for(int i=0;i<n;i++){
    cin>>addy[i];
  }

  for(int i=0;i<n;i++){
    if(om[i]!=0){
        a++;
    }else{
        maxo=max(a,maxo);
        a=0;
    }
  }
  maxo=max(a,maxo);

  for(int i=0;i<n;i++){
    if(addy[i]!=0){
        b++;
    }else{
        maxe=max(b,maxe);
        b=0;
    }
  }
   maxe=max(b,maxe);
  
if(maxe>maxo){
    cout<<"Addy"<<endl;
}else if(maxe==maxo){
    cout<<"Draw"<<endl;
}else{
    cout<<"Om"<<endl;
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