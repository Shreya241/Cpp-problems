#include<bits/stdc++.h>
using namespace std;

int power(int n,int k){
    
    if(p==1){
        return n;
    }
    return (power(n,p-1)*n);
}

int main(){
    cout<<power(2,12);
}