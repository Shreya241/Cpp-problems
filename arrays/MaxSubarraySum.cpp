#include<iostream>
using namespace std;

int sub(int arr[],int n){
    int res=arr[0];
    int maxend=arr[0];
    for(int i=1;i<n;i++){
        maxend=max(maxend+arr[i],arr[i]);
        res=max(maxend,res);
    }
    return res;
}