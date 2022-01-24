#include<iostream>
using namespace std;

void bonacci(long n, int m){
    int arr[m]={0};
    arr[n-1]=1;
    arr[n]=1;

    for(int i=n+1;i<m;i++){
        arr[i]=2*arr[i-1]-arr[i-n-1];
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int m,n;
    m=8,n=3;
    bonacci(n,m);
}