#include<iostream>
using namespace std;
void freq(int arr[], int n,int p){
    int i=1; int a[n+1];
    while(i<=p){
        int sum=0;
        for(int j=0;j<n;j++){
           if(arr[j]==i){
               sum++;
           }
        }
        a[i]==sum;
        i++;
    }
}
int main(){
    int n=5;int p=5;
    int arr[n]={2,3,2,3,5};
    freq(arr,n,p);
}