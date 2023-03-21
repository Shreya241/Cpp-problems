#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
       int n,m,k;cin>>n>>m>>k;
       int arr[n][m];
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=i*m+(j+1);
        }
       }
       while(k--){
        int q,x,v;cin>>q>>x>>v;
        x--;
        if(q==0){
            for(int j=0;j<m;j++){
                arr[x][j]=arr[x-1][j]*v;
            }
        }else if(q==1){
            for(int i=0;i<n;i++){
                arr[i][x-1]=arr[i][x-1]*v;
            }
        }
       }
       int ans=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans+=arr[i][j];
        }
       }
       cout<<ans<<endl;
    }
}