#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
int t;cin>>t;
while(t--){
  int n;cin>>n;
  int arr[n];
  int ca=0,cb=0;
  for(int i=1;i<=n;i++){
     arr[i-1]=pow(2,i);
  }
  int a=0,b=0;
  int i=0,j=n-1;
  a+=arr[j];j--;ca++;
  while(cb<n/2){
    if(b<a){
        b+=arr[j];j--;
        cb++;
    }
  }
  while(ca<n/2){
    a+=arr[i];i++;ca++;
  }
  cout<<abs(a-b)<<endl;
}
}