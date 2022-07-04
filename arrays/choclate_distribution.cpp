#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n,int m){
   int i=0,diff,mindiff=INT_MAX;
   sort(arr,arr+n);
   while((i+(m-1))<n){
    diff=(arr[i+(m-1)]-arr[i]);
    mindiff=min(mindiff,diff);
    i++;
   }
  cout<<mindiff;
}

int main(){
int n=7;int m=3;
int arr[n]={7, 3, 2, 4, 9, 12, 56};
subarray(arr,n,m);
}