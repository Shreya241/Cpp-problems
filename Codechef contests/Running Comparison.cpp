#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int ans=0;
       int arr1[n],arr2[n];
       for(int i=0; i<n; i++){
        cin>>arr1[i];
       }
       for(int i=0; i<n; i++){
        cin>>arr2[i];
       }
       for(int i=0; i<n; i++){
        int a=arr1[i],b=arr2[i];
        if((a<b && a*2>=b)||(b<a && b*2>=a || a==b)){
            ans++;
        }
       }
       
       cout<<ans<<endl;
    }
}