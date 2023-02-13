#include<iostream>
#include<map>
using namespace std;
 
int main(){
   int n;cin>>n;
   int s,arr[5]={0};
   while(n--){
      cin>>s;
      arr[s]+=1;
   }
   int c=arr[4]+arr[3]+arr[2]/2;
   arr[1]=arr[1]-arr[3];
   if(arr[2]%2==1){
      c+=1;
      arr[1]-=2;
   }
   if(arr[1]>0){
      c+=(arr[1]+3)/4;
   }
   cout<<c;
}