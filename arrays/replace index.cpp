#include<bits/stdc++.h>
using namespace std;

void rep(int A[],int n){
   int p=INT_MIN;
       int diff=0;
       for(int i=0;i<n-1;i++)
       {
           for(int j=n-1;j>i;j--)
           {
               if(A[i] <= A[j])
               {
               diff=j-i;
               break;
               }
           }
            p=max(diff,p);
       }
       cout<< p;
}

int main(){
    int n=9;
    int arr[n]={34,8,10,3,2,80,30,33,1};
    rep(arr,n);
}