#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[],int n,int sum){
   int curr_sum=arr[0];
   int start=0;
   int i=1;
   while(i<n){
    curr_sum+=arr[i];
    if(curr_sum>sum & start<i-1){
       curr_sum=curr_sum-arr[start];
       start++;
    }
    if(curr_sum=sum){
        cout<<start<<" "<<i-1;
        return 1;
    }
    i++;
   }
cout<<0;
return 0;
   
}

int main(){
int n=10,sum=15;
int arr[n]={1,2,3,4,5,6,7,8,9,10};
subarray(arr,n,sum);
}