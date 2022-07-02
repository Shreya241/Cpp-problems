#include<iostream>
using namespace std;

int storage(int arr[],int n){
    int i=0;
    long long int maxp=INT_MIN;
    long long int p=1;
    while(i<n){
        p*=arr[i];
        maxp=max(maxp,p);
        cout<<p<<endl;
        if(p==0){
            p=1;
        }
        i++;
    }
    p=1;
    int j=n-1;
    while(j>=0){
        p*=arr[j];
        maxp=max(maxp,p);
        if(p==0){
            p=1;
        }
        j--;
    }
   return maxp;
}

int main(){
    int n=13;
    int arr[n]={3 ,12 ,15, 23, 33, -35, 30, -40, -30, -30 ,-30 ,26, 28};
    cout<<storage(arr,n);
}
