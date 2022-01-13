#include<bits/stdc++.h>
using namespace std;

int num(int n,int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return num(n-1,r-1)+num(n-1,r);
    }
}

int main(){
    cout<<num(5,2);
    cout<<2/10;
}