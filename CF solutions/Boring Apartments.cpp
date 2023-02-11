#include<iostream>
#include <numeric>
#include<algorithm>  
using namespace std;
 
 
int main(){
  int t;
  cin>>t;
  while(t--){
   int n;cin>>n;
   int c=0;
   int p=n;
   while(p>0){
    p=p/10;
    c++;
   }
   int arr[4]={1,3,6,10};
   int r=n%10;
   int ans=(r-1)*10+arr[c-1];
   cout<<ans<<endl;
  }
}