#include<iostream>
using namespace std;

void insret(int arr[],int m,int n){
    arr[n];
    arr[n]=m;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=5;int m=99;
    int arr[n]={1,2,34,5,6};
    insret(arr,m,n);
}