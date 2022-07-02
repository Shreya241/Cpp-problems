#include<bits/stdc++.h>
using namespace std;

int kadens(int arr[], int n){
    int i=0;
    int j=1;
    int profit=0;
    while(j<n){
        int diff=arr[j]-arr[i];
        if(diff<0){
            i=j;
        }else{
            profit=max(profit,diff);
            j++;
        }
    }
    return profit;

}

int main(){
    int n=5;
    int arr[n]={1,2,3,-2,5};
    cout<<kadens(arr,n);
}