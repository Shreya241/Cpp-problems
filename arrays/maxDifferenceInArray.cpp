#include<iostream>
using namespace std;

int maxDiff1(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                if(arr[j]-arr[i]>max){
                    max=arr[j]-arr[i];
                }
            }
        }
    }
    return max;
}


//effecient method


int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0],minVal=arr[0];
    for(int i=1;i<n;i++){
       res=max(res,arr[i]-minVal);
       minVal=min(minVal,arr[i]);
    }
    return res;
}

int main(){
    int n=6;
    int arr[n]={7,9,5,6,3,2};
    cout<<maxDiff(arr,n);
}