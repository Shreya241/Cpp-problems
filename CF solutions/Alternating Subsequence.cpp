#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;cin>>t;
    while(t--){
long long n;
cin>>n;
long long s=0,ms=0,ans=0;
for(int i=0; i<n; i++){
    long long k;cin>>k;
    if(k>0)ans+=ms;
    if(k>0){
        ms=0;
        s=max(k,s);
    }
    if(k<0)ans+=s;
    if(k<0){
        s=0;
        if(ms==0){
            ms=k;
        }else ms=max(k,ms);
    }
}
ans=ans+ms;
ans=ans+s;
cout<<ans<<endl;
}
}