#include<iostream>
using namespace std;

int maxBin(int arr[],int n){
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
           curr=0;
        }
        else{
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}