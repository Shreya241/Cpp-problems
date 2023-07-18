#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<"->";
    }
    cout<<"NULL";
    cout<<endl;
    bool flag=true;
    int p=0;
    while(p<n){
        if(flag){
            if(v[p]>v[p+1] && p!=n-1){
                swap(v[p],v[p+1]);
            }
        }else{
            if(v[p]<v[p+1] && p!=n-1){
                swap(v[p],v[p+1]);
            }
        }
        p++;
        if(flag==true) flag=false;
        else flag=true;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<"->";
    }
    cout<<"NULL";
}