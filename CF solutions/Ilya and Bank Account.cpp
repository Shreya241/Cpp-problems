#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    if(n>=0){
        cout<<n;
        return 0;
    }else{
        int s=n*-1;
        int k=s%10;
        s=s/10;
        int l=s%10;
        if(k>l){
            cout<<n/10;
        }else{
            n=n/100;
            cout<<(n*10)-k;
        }
    }
}