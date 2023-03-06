#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        string str;
        cin>>str;
        set<string>v;
        int ans=1;
        char p = str[0];
       for(long long i=1;i<n-1;i++) {
           if(str[i+1]!=p){
            ans++;
           }
           p=str[i];
        }
        
        cout << ans<< endl;
    }
    return 0;
}