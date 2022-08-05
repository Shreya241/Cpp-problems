#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool funct(int arr[],int size,int n){
   n=abs(n);
   sort(arr,arr+size);
   int a=0,b=1;
   while(b<size){
    long long int d=arr[b]-arr[a];
    if(d==n && a!=b){
        return true;
    }else if(d>n){
        a++;
    }else{
        b++;
    }
   }
   return false;
}

int main(){
    int n=78;
    int s=6;
    int arr[s]={5, 20, 3, 2, 5, 80};
    cout<<funct(arr,s,n);
}