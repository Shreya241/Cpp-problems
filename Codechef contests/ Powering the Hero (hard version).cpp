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
    long long s=0;
    priority_queue<int>q;
    for(long long i=0;i<n;i++){
        if(arr[i]==0 && !q.empty()){
            s+=q.top();
            q.pop();
        }else{
            q.push(arr[i]);
        }
    }
    cout<<s<<endl;
   }
}
