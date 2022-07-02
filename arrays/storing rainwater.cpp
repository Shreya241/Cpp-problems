#include<iostream>
using namespace std;

int storage(int arr[],int n){
    int sum=0;int k;
    k=min(arr[0],arr[n-1]);
    int i=1;
    while(i<n-1){
        if(arr[i]==0){
            sum+=k;
        }else{
            sum+=(k-arr[i]);
        }
        i++;
    }
    if(sum>0){
    return sum;}else{
        return 0;
    }
}

int main(){
    int n=3;
    int arr[n]={6,9,9};
    cout<<storage(arr,n);
}
