#include<iostream>
using namespace std;
void leftShift(int arr[],int l,int n){
    for(int i=0;i<l-n;i++){
        arr[i]=arr[i+n];
    }
    for(int i=l-n;i<l;i++){
        arr[i]=0;
    }
}

int main(){
    int n,l;
    l=5;n=2;
    int arr[l]={1,2,3,4,5};
    leftShift(arr,l,n);
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}