#include<iostream>
using namespace std;
void zero(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
    int n=5;
    int arr[]={12,0,11,0,7};
    zero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}