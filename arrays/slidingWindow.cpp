#include<iostream>
using namespace std;

int wind(int arr[],int n,int k,int p){
    int sum=0,final=0;
    for(int i=0;i<k;i++){
       sum+=arr[i];
       final=sum;
       if(final==p){
           return true;
       }
    }
    for(int i=k;i<n;i++){
        sum+=(arr[i]-arr[i-k]);
        if(sum==p){
            return true;
        }
    }
    return false;
}
int main(){
    int n=6;
    int k=3;
    int p=43;
    int arr[n]={1,8,30,-5,20,7,3};
    cout<<wind(arr,n,k,p);

}