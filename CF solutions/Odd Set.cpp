#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
 cin>>n;
 while(n--){
    int k;cin>>k;
    int e=0,o=0;
    int arr[2*k];
    for(int i=0;i<2*k;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    if(o==e){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
 }
}