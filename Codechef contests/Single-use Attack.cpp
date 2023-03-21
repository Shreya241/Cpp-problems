#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        int ans=0;
        h=h-y;
        ans++;
        if(h>0){
            while(h>0){
                h=h-x;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}