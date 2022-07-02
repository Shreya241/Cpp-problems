#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int kadens(int arr[], int n,int k){
    sort(arr,arr+n);
    int final = arr[n - 1] - arr[0];
    int maximum = arr[n - 1],minimum = arr[0];


    for (int i = 1; i < n; i++)
        {
        
        maximum = max(arr[i - 1] + k, arr[n - 1] - k);
        minimum = min(arr[0] + k, arr[i] - k);
        
        final = min(maximum-minimum,final);
        
        }
    return final;
}

int main(){
    int n=4;int k=2;
    int arr[n]={1,5,8,4};
    cout<<kadens(arr,n,k);
}