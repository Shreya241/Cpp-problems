#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool funct(int arr[],int size,int n){
   sort(arr,arr+size);
   int s=0,l=n-1;
   int mid=0;
   while(s<=l){
    mid=(s+l)/2;
    if(arr[mid]==n){
        return true;
    }else if(arr[mid]>n){
        l=mid-1;
    }else{
        s=mid+1;
    }
   }
   return -1;
}

int main(){
    int n=20;
    int s=6;
    int arr[s]={5, 20, 3, 2, 5, 80};
    cout<<funct(arr,s,n);
}