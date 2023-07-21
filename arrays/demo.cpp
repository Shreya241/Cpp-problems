#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
    }
    return true;
}
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<=b;i++){
        if(isPrime(v[i])) ans++;
    }
    cout<<ans;
}