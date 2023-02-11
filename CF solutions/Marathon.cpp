#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
  int t;cin>>t;
  while(t--){
   int arr[4];
   for(int i=0;i<4;i++){
    cin>>arr[i];
   }
   int c=0;
    for(int i=1;i<4;i++){
    if(arr[i]>arr[0]){
      c++;
    }
   }
   cout<<c<<endl;;
  }
}