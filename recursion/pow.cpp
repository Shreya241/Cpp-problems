#include<bits/stdc++.h>
using namespace std;

int power(int n,int p){
    if(p==1){
        return n;
    }
    return (power(n,p-1)*n);
}

int main(){
    cout<<power(6,2);
}