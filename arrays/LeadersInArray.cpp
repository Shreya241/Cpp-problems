#include<iostream>
using namespace std;

void leaders1(int arr[],int n){
for(int i=0;i<n;i++){
    bool flag=true;
    for(int j=i+1;j<n;j++){
        if(arr[i]<=arr[j]){
            flag=false;
            break;
        }
    }
    if(flag==true){cout<<arr[i]<<" ";}
}
}

//effecient method

void leaders(int arr[],int n){
 int curr_ldr=arr[n-1];
 cout<<curr_ldr<<" ";
 for(int i=n-2;i>=0;i--){
    if(curr_ldr<arr[i]){
        curr_ldr=arr[i];
        cout<<curr_ldr<<" ";
    }
 }
}

int main(){
    int arr[5]={7,10,4,3,6};
    int n=5;
    leaders(arr,n);
}