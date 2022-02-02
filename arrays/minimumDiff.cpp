#include<iostream>
using namespace std;
int diff(int arr[], int n){
    int diff;int final=abs(arr[n-1]-arr[0]);
    for(int i=1;i<n;i++){
        diff=arr[i]-arr[i-1];
        int abs_diff=abs(diff);
        final=min(abs_diff,final);
    }
    return final;
}

int main(){
    int n=7;
    int arr[n]={8,-8,9,-9,10,-11,12};
    cout<<diff(arr,n)<<endl;
}