#include <bits/stdc++.h>
using namespace std;

int maxArr(int arr[] ,int n){
   int sum=0,max_sum=0,j=0;
   for(int i=1;i<=n;i++){
       while(j<i){
           sum=arr[i]&arr[j];
           max_sum=max(max_sum,sum);
           j++;
       }
    return max_sum;
   }
}

int main()
{
    int n=4;
    int arr[n]={4,8,12,16};
    cout<<maxArr(arr,n);
}
