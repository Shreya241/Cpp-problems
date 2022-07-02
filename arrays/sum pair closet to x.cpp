#include<bits/stdc++.h>
using namespace std;
int wave(int arr[],int n,int x){
    int i=0,j=n-1;
    int sum=0;
    int f_i,f_j;
    int diff=x;
    while(i<j){
        sum=arr[i]+arr[j];
        if(abs(sum-x)<diff){
            diff=abs(sum-x);
            f_i=i;
            f_j=j;
        }
        if(sum<x){
            i++;
        }else{
            j++;
        }
    }
    return {arr[f_i],arr[f_j]};
}

int main(){
   int n=6;int x=54;
   int a1[n] = {10, 22, 28, 29, 30, 40};
   cout<<wave(a1,n,x);

}