#include<bits/stdc++.h>
using namespace std;
 

int main(){
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=1;i<n;i++){
    arr[i]=arr[i]+arr[i-1];
   }

   int k;cin>>k;
   for(int j=0;j<k;j++){
    int p;cin>>p;
    int ans = lower_bound(arr, arr + n, p) - arr;
    cout<<ans+1<<endl;
   }
}