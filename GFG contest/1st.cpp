#include <iostream>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
    int n;cin>>n;
    int m;cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
   int s1=0,s2=0;
    for(int i=0;i<m;i++){
        s1+=arr[i];
    }
    for(int i=n-1;i>=n-m;i--){
        s2+=arr[i];
    }
    cout<<(s2-s1);
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) funct();
    return 0;
}