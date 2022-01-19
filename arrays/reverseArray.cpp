#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
        int temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
        h--;
    }
}

int main(){
    int n=5;
    int arr[]={12,33,44,55,66};
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}