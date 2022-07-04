#include<bits/stdc++.h>
using namespace std;

int sub(int n,int arr[]){
    int count=1,fcount=1,i=0;
    sort(arr,arr+n);
    while(i<n){
        if(arr[i+1]==arr[i]+1){
            count++;
            i++;
        }else if(arr[i+1]==arr[i]){
            i++;
        }
        else{
            count=1;
            i++;
        }
        
        fcount=max(count,fcount);
    }
    return fcount;
}

int main(){
 int n=5;
int a[n] = {10,20,21,22,23};
cout<<sub(n,a);
}