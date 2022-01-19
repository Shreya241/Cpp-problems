#include<iostream>
#include<cmath>
using namespace std;

int duplicates(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int n=5;
    int arr[]={12,33,33,66,77};
    n=duplicates(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}