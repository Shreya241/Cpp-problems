#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 
int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    reverse(arr,arr+n);
    if(n%2!=0){
        int k=arr[0];
        arr[0]=arr[n/2];
        arr[n/2]=k;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}