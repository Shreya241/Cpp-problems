#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;cin>>n>>m;
   vector<int>v;
    for(int i=0;i<n;i++){
        int j;cin>>j;
        v.push_back(j);
    }
    for(int i=0;i<m;i++){
        int k;cin>>k;
        auto ans=unique(v.begin()+k-1,v.end());
        cout<<ans<<endl;
    }
}