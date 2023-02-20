#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
 cin>>n;
 while(n--){
    long long a,j=0;
    cin>>a;
    long long ans=sqrt(a);
    for(int i=1;i<ans;i++){
        if(ans%i==0 && ans*ans==a){
            j++;
        }
    }
    if(j==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 }
}