#include<iostream>
using namespace std;

int profit(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit+=(arr[i]-arr[i-1]);
        }
    }
    return profit;
}

int main(){
    int n=5;
    int arr[n]={1,5,3,8,12};
    cout<<profit(arr,n);
}