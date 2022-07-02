#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[],int n){
   int ans=1;
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
      if(arr[i]<=0){
        continue;
      }else if(arr[i]==ans){
        ans++;
      }else{
        break;
      }
   }
   return ans;
}

int main(){
int n=3;
int arr[n]={1,3,3};
cout<<subarray(arr,n);
}