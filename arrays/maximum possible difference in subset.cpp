#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a,b;
    int s=0,p=0;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        if(k<0){
            if(find(a.begin(),a.end(),k)!=a.end()){
                b.push_back(k);
                p+=k;
            }else{
                a.push_back(k);
                s+=k;
            }
        }else{
           if(find(b.begin(),b.end(),k)!=b.end()){
                a.push_back(k);
                s+=k;
            }else{
                b.push_back(k);
                p+=k;
            } 
        }
    }

    if(p==0){
    sort(a.begin(),a.end());
    p+=a[0];
    s-=a[0];
    }
    cout<<abs(s-p);
}