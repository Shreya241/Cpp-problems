#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n){
   int osum=(n*(n+1))/2;
   int sum=0;
   int k;
   int prr[2];
   sort(arr,arr+n);
   int i=0;
   while(i<n){
      sum+=arr[i];
      if(arr[i]==arr[i+1]){
         k=i;
         prr[0]=arr[i];
      }
      i++;
   }
   prr[1]=arr[k]+(osum-sum);
}

int main(){
int n=3;
int arr[n]={1,3,3};
subarray(arr,n);
}