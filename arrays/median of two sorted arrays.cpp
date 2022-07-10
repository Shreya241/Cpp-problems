#include<bits/stdc++.h>
using namespace std;

int subarray(int arr1[],int arr2[],int n,int m){
   vector<int>ans;
   int i=0,j=0;
   while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        ans.push_back(arr1[i]);
        i++;
    }else{
        ans.push_back(arr2[j]);
        j++;
    }
   }
   while(i<n){
    ans.push_back(arr1[i]);
    i++;
}
   while(j<m){
    ans.push_back(arr2[j]);
    j++;
   }
   int p;
   if(ans.size()%2==0){
    p = ans[(ans.size())/2] + ans[(ans.size())/2 - 1];
          return p/2;
   }p = ans[(ans.size())/2];
      return p;
}

int main(){
int n=3;int m=4;
int arr1[n]={1,5,9};
int arr2[m]={2,3,6,7};
cout<<subarray(arr1,arr2,n,m);
}