#include<iostream>
using namespace std;
void wave(int arr[],int n){
    int i=0;
    while(i<n){
        if(arr[i+1]>arr[i]){
            swap(arr[i+1],arr[i]);
        }
        i=i+2;
    }
}

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    wave(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}