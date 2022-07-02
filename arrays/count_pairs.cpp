#include<bits/stdc++.h>
using namespace std;

int kadens(int arr[], int n,int k){
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    int count=0;
    while(i<j){
        if(arr[i]+arr[j]==k){
            count++;
            i++;
        }
        if(arr[i]+arr[j]<k){
            i++;
        }
        if(arr[i]+arr[j]>k){
            j--;
        }
    }
    return count;

}

int main(){
    int n=4;int k=6;
    int arr[n]={1,5,7,1};
    cout<<kadens(arr,n,k);
}