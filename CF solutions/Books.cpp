#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
   long long n,t,c=0,s=0;
   cin>>n;
   cin>>t;
   long long arr[n];
   for(long long i=0; i<n; i++){
    cin>>arr[i];
   }
   long long i=0,j=n-1;
   if(n==1 && t<arr[0]){
      cout<<0;
      return 0;
   }else if(n==1 && t>arr[0]){
      cout<<1;
      return 0;
   }
   while(c<t && i<n){
      c+=arr[i];
      if(c<t)i++;
   }
   while(s<t && j>=0){
      s+=arr[j];
      if(s<t)j--;
   }
   cout<<max(i,n-j+1);
}