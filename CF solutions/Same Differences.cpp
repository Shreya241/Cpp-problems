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
    int c=0;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(arr[j]-arr[i]==j-i){
                c++;
            }
        }
    }
    cout<<c<<endl;
 }
}