#include<iostream>
using namespace std;

int pallindrom(int n){
    int temp=n;
    int rev=0;
    while(temp!=0){
        int i=temp%10;
        rev=rev*10+i;
        temp=temp/10;
    }
    return rev==n;
}

int main(){
    int n;cin>>n;
    cout<<(bool)pallindrom(n);
}