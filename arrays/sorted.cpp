#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n=5;
    int arr[]={12,33,44,55,66};
    cout<<sorted(arr,n);
}