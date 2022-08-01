#include<iostream>
using namespace std;

int funct(int n,int arr[]){
    int ans=0;
      
      for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
          ans=i;
        }
      }
      if(arr[0]==0 && arr[n-1]==0){
        ans=-1;
      }
      return ans;
    }

int main(){
    int n=5;
    int arr[n]={1,1,1,1,1};
    cout<<funct(n,arr);
}