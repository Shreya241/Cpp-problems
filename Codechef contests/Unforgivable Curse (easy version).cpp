#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        string s,p;
        cin>>s>>p;
        string m=s,l=p;
        sort(m.begin(),m.end());
        sort(l.begin(),l.end());
        if(m!=l){
            cout<<"NO"<<endl;
        }
        else if(n>=6){
            sort(s.begin(),s.end());
            sort(p.begin(),p.end());
            if(s==p){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }else if(n==5){
            if(s[2]==p[2]){
                cout<<"YES"<<endl;
            }else{cout<<"NO"<<endl;}
        }else if(n==4){
            if(s[1]==p[1] && s[2]==p[2]){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(s==p){
                cout<<"YES"<<endl;
            }else{cout<<"NO"<<endl;}
        }
    }
}