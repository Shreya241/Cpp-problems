#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int a=INT_MIN,b;
    char c;
    int ans;
    for(int i=0;i<str.size()-2;i=i+2){
        if(a==INT_MIN) a=int(str[i]-'0');
        else a=ans;
        b=int(str[i+2]-'0');
        c=str[i+1];
        if(c=='A') ans=(a&b);
        else if(c=='B') ans=(a|b);
        else ans=(a^b);
    }
    cout<<ans;
}