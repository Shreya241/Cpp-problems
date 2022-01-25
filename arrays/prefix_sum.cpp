#include<iostream>
using namespace std;
int pre_sum[10000];

void prefix(int arr[],int n){
    pre_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        pre_sum[i]=pre_sum[i-1]+arr[i];
    }
}

int getSum(int pre_sum[],int l,int r){
    if(l==0){
        return(pre_sum[r]);
    }
     return(pre_sum[r]-pre_sum[l-1]);
    
}

int main(){
    int n=7;
    int arr[n]={2,8,3,9,6,5,4};
    int l,r;
    l=2;r=6;
    prefix(arr,n);
    cout<<getSum(pre_sum,l,r);
}