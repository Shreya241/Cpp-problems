#include<iostream>
using namespace std;
void zero(int arr[],int n,int m){
    int temp[m];
    for(int j=0;j<m;j++){
      temp[j]=arr[j];
    }
    for(int i=m;i<n;i++){
        arr[i-m]=arr[i];
    }
    for(int i=0;i<m;i++){
        arr[n-(m-i)]=temp[i];
    }
}

int main(){
    int n=5;
    int m=2;
    int arr[]={1,2,3,4,5};
    zero(arr,n,m);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}