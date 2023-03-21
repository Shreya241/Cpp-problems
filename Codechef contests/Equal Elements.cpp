#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n]={};
        for(int i=0;i<n;i++){
            int k;cin>>k;
            arr[k-1]++;
        }
       sort(arr,arr+n);
       int ans=0;
       for(int i=0;i<n-1;i++){
        ans+=arr[i];
       }
       cout<<ans<<endl;
    }
}