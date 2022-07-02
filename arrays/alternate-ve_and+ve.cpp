#include<iostream>
using namespace std;
void wave(int arr[],int n){
    int pos[n];int neg[n];
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos[i]=arr[i];
        }else{
            neg[i]=arr[i];
        }
    }
    int k=0;
    if(k==n%2){
        cout<<pos[k];
    }
}

int main(){
    int n=9;
    int arr[n]={9, 4, -2, -1, 5, 0, -5, -3, 2};
    wave(arr,n);
    
}