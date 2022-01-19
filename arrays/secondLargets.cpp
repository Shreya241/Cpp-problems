#include<iostream>
using namespace std;

int getlargest(int arr[], int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
}
int secondLar(int arr[],int n){
    int largest=getlargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res=i;
            }
            else if(arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}
//////effecient approach/////
int secondLarg(int arr[],int n){
    int res=-1,largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLarg(arr,n);
}