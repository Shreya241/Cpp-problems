#include<iostream>
using namespace std;

int fact(int n){
    int f=1;;
    if(n==0){
        f= 1;
    }
    for(int i=1;i<=n;i++){
        f=f*i;
    }   
    int digits=0;
    while(f>0){
        f=f/10;
        digits++;
    }
    return digits;
}
int main(){
    int n;cin>>n;
    cout<<fact(n);
}