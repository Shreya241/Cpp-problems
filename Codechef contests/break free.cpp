#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
int power(int x, int n)
{
    int result = 1;
    while (n > 0) {
        if (n & 1 == 1) // y is odd
        {
            result = result * x;
        }
        x = x * x;
        n = n >> 1; // y=y/2;
    }
    return result;
}

void funct(){
  int n;cin>>n;
        int arr[n];
        int e=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0) e++;
        }
   int ans=power(2,e);
   if(e==n) ans--;
   cout<<ans<<endl;
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