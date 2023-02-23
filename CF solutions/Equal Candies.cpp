#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
 cin>>n;
 while(n--){
    int k;cin>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    sort(arr,arr+k);
    int c=0;
    for(int i=0;i<k;i++){
        c+=arr[i]-arr[0];
    }
    cout<<c<<endl;
 }
}