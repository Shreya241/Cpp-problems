#include<bits/stdc++.h>
using namespace std;

void common(int n, int arr[]){
    int i=0,k=0;
    sort(arr,arr+n);
    while(i<n){
        if(arr[i+1]==arr[i]){
            cout<<arr[i]<<" ";
        }
        i++;
    }
  
}

int main(){
    int n=10;
    int arr[n]={1,2,4,3,4,2,5,5,6,6};
    common(n,arr);
}