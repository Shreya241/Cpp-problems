#include<iostream>
using namespace std;
void wave(int arr[],int n){
    int temp=0;

        for(int i=0;i<n-1;i+=2){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        
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