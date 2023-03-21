#include<bits/stdc++.h>
using namespace std;
 
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n,q;
    cin>>n>>q;
    int arr[n];
    for(long long i=0;i<n;i++){
       cin>>arr[i];
    }
    for(long long i=0;i<n-1;i++){
       arr[i+1]+=arr[i];
    }
    for(long long i=0;i<q;i++){
        long long l,r,k;
        long long s=0;
        cin>>l>>r>>k;
        long long d=(r-l)+1;
        s=d*k;
        long long ps=arr[r]-arr[--l];
        long long ans=arr[n-1];
        ans=ans+s-ps;
        if(ans%2!=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
  }
}