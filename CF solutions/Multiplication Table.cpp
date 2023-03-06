#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int x;cin>>x;
    int c=0;
    for(int i=1;i<=n;i++){
        if(x%i==0 && x/i<=n){
            c++;
        }
    }
    cout<<c<<endl;
}