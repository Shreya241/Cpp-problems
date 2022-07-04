#include<bits/stdc++.h>
using namespace std;

int long_s(int arr[],int n){
   int diff=0,pdiff=0,i=1,sum=0;
   while(i<n){
    diff=arr[i]-arr[i-1];
    if((diff>0)&&(pdiff<=0) || (diff<0)&&(pdiff>=0)){
        sum++;
        pdiff=diff;
    }
    i++;
   }
   return sum+1;
}

int main(){
int n=10;
int arr[n]={1,17,5,10,13,15,10,5,16,8};
cout<<long_s(arr,n);
}