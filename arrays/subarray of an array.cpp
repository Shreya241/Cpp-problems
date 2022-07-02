#include<bits/stdc++.h>
using namespace std;
void wave(int arr1[],int arr2[],int n, int m){
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            return "No";
        }
    }
    if(j==m){
        return "Yes";
    }else{
        return "No";
    }
}

int main(){
   int n=6;
   int m=4;
   int a1[n] = {11, 1, 13, 21, 3, 7};
   int a2[m] = {11, 3, 7, 1};
   wave(a1,a2,n,m);
    
}