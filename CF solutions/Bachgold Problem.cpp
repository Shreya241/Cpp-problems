#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;cin>>n;
  if(n%2==1){
    n=n/2;
    n--;
    cout<<n+1<<endl<<3<<" ";
  }else{
    n=n/2;
    cout<<n<<endl;
  }
  for(int i=0;i<n;i++){
    cout<<2<<" ";
  }
}