#include<iostream>
using namespace std;
void zero(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int n=5;
    int arr[]={12,0,11,0,7};
    zero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}