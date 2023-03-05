#include<bits/stdc++.h>
using namespace std;
 
int main(){
   long long t;cin>>t;
   while(t--){
    long long n;cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    for(long long i=0;i<n;i++){
        if(arr[i]==0){
            long long k=0, idx=-1;
            for(long long j=0;j<i;j++){
                if(arr[j]>=k){
                    idx=j;
                    k=arr[j];
                }
            }
            sum+=k;
            arr[idx]=0;
        }
    }
    cout<<sum<<endl;;
   }
}
