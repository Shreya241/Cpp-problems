#include<iostream>
using namespace std;

int equi(int arr[],int n){
int sum1=0,sum2=0;
 
 for(int i=0;i<n;i++)
     sum1+=arr[i];
     
for(int i=0;i<n;i++) {
     if(sum1-arr[i]==2*sum2)
     return i+1;
     sum2+=arr[i];
 }
 return -1;

   }