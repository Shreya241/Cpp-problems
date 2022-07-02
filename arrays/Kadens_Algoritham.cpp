#include<bits/stdc++.h>
using namespace std;

int kadens(int arr[], int n){
    int curr_sum=0, final_sum=arr[0];
    int i=0;
    while(i<n){
        curr_sum+=arr[i];
        final_sum=max(final_sum,curr_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
        i++;
    }
    return final_sum;
}

int main(){
    int n=5;
    int arr[n]={1,2,3,-2,5};
    cout<<kadens(arr,n);
}