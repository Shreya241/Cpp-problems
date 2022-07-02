#include<iostream>
using namespace std;

int storage(int arr[],int dep[],int n){
    int count=0;
    int i=1,j=0;
    while(i<n){
        if(dep[j]<arr[i]){
            j++;i++;
        }else{
            count++;
            i++;j++;
        }
    }
    if(count==0){
        return 1;
    }else
      return count;
}

int main(){
    int n=6;
    int arr[n] = {900, 940, 950, 1100, 1500, 1800};
    int dep[n] = {910, 1200, 1120, 1130, 1900, 2000};
    cout<<storage(arr,dep,n);
}
