#include<bits/stdc++.h>
using namespace std;

int common(int n,int X, int arr[]){
    bool P=false;
    sort(arr,arr+n);
   for(int i=0;i<n;i++){
   int j=i+1;
   int k=n-1;
   while(j<k){
    if(arr[i]+arr[j]+arr[k]==X){
        P=true;
        break;
    }else if(arr[i]+arr[j]+arr[k]<X){
        j++;
    }else if(arr[i]+arr[j]+arr[k]>X){
        k--;
    }
   }
   }
   return P;
}

int main(){
    int n=5,X=10;
    int arr[n]={1,2,4,3,6};
    cout<<common(n,X,arr);
}