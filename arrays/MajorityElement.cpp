#include<iostream>
using namespace std;

int maj(int arr[],int n){
    for(int i=0;i<n;i++){
       int count=1;
       for(int j=i+1;j<n;j++){
           if(arr[i]==arr[j]){
               count++;
           }
       }
       if (count>n/2){
           return i;
       }
      
    }
     return -1;
}


int main(){
    int n=8;
    int arr[n]={8,7,6,8,6,6,6,6};
    cout<<maj(arr,n);
}