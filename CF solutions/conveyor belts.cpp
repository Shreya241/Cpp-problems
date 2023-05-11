#include<bits/stdc++.h>
#include <sstream>
#define int long long
using namespace std;
 
 
void funct(){
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int p1=abs(n-(x1-1));
        cout<<abs(p1-y2)<<endl;
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