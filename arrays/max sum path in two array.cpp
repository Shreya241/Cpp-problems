#include<bits/stdc++.h>
using namespace std;
void wave(int arr1[],int arr2[],int n, int m){
    int sum1=0,sum2=0;
    int max_sum;
    int i=0,j=0;
    while(i<n & j<m){
        if(arr1[i]<arr2[j]){
            sum1+=arr1[i++];
        }else if(arr2[j]<arr1[i]){
            sum2+=arr2[j++];
        }else{
            max_sum=max(sum1,sum2);
            max_sum+=arr1[i++];
            j++;
            sum1=0;sum2=0;
        }
    }
    while(i<n){
        sum1+=arr1[i++];
    }
    while(j<m){
        sum2+=arr2[j++];
    }
    max_sum+=max(sum1,sum2);
    cout<< max_sum;
}

int main(){
   int n=5;
   int m=4;
   int a1[n] = {2,3,7,10,12};
int a2[m] = {1,5,7,8};
   wave(a1,a2,n,m);
    
}