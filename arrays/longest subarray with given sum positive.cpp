#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
   int arr[5]={2,3,5,1,9};
   int k=10;
   int n=5;
   int s=arr[0];
   int l=0,r=0,ml=0;
   while(r<n){ 

    while(s>k && l<=r){
        s-=l;
        l++;
    }
    if(s==k){
        ml=max(ml,r-l+1);
    }
    
    r++;
    if(r<n){
        s+=arr[r];
    }
   }
   cout<<ml;
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--) funct();
    return 0;
}