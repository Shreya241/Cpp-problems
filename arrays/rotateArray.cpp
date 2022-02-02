#include<iostream>
using namespace std;
 void rotate(int a[], int n,int d){
     int k=0, b[d];
        for(int j=0;j<d;j++)
           b[j]=a[j];
        for(int i=d;i<n;i++)
           a[i-d]=a[i];
        for(int i=n-d;i<n;i++){
           a[i]=b[k];
           k++;
        }
 }

 int main(){
     int n=5;
     int d=2;
     int arr[n]={1,2,3,4,5};
     rotate(arr,n,d);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }