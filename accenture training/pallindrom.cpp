#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string p=str;
    reverse(p.begin(),p.end());
    int ans=0;
    int i=0;
    while(i<str.size()){
        if(str[i]!=p[0]){
            ans++;
        }else{
            break;
        }
        i++;
    }
    cout<<ans;
}