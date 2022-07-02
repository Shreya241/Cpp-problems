#include<iostream>
using namespace std;

void merged(int a[], int b[], int c[], int m, int n){
   int i=0,j=0,k=0;
   while(i<m && j<n){
       if(a[i]<b[j]){
           c[k++]=a[i++];
       }else{
           c[k++]=b[j++];
       }
   }
   for(;i<m;i++){
       c[k++]=a[i];
   }
   for(;j<n;j++){
       c[k++]=b[j];
   }
}

int main(){
    int m=5,n=5;
    int a[m]={3,8,16,20,25};
    int b[n]={4,10,12,22,23};
    int c[m+n];
    merged(a,b,c,m,n);
    for(int i=0;i<m+n;i++){
       cout<<c[i]<<" ";
    }
}