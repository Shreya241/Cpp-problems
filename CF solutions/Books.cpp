#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
   int n;cin>>n;
   int m;cin>>m;
   int arr[n];
   int c=0;int s=0;int ms=0;
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   for(int i=0; i<n; i++){
    for(int j=i;j<n;j++){
       if(s<m){
        s+=arr[j];
        if(s<=m)c++;
        ms=max(c,ms);
       }
   }
   c=0;
   s=0;
}
   cout<<ms;
}