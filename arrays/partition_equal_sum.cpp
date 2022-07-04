#include<bits/stdc++.h>
using namespace std;

void long_s(int arr[],int n){
   sort(arr,arr+n);
   int sum1=arr[0],sum2=arr[n-1],i=0,j=n-1;
   while(i<j){
    if(sum1<sum2){
        sum1+=arr[i+1];
        i++;
    }else if(sum1>sum2){
        sum2+=arr[j-1];
        j--;
    }
   }
    if(sum1=sum2){
        cout<< "YES";
    }else{
        cout<<"NO";
    }
}

int main(){
int n=4;
int arr[n]={1,5,11,5};
long_s(arr,n);
}