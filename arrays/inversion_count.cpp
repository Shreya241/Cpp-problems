#include<bits/stdc++.h>
using namespace std;

int inversion_count(int arr[], int n){
    int i=0, j=0, count=0;
    while(j<n){
        if(arr[i]>arr[j] & i<j){
            swap(arr[i],arr[j]);
            i=0;j=0;
            count++;
        }
        else{
            i=j;
            j++;
        }
    }
    return count;
}

int main(){
    int n=5;
    int arr[n]={2,4,1,3,5};
    cout<<inversion_count(arr,n);
}