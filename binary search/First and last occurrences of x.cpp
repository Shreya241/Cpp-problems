#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> funct(int arr[],int n,int x){
   int s=0,e=n-1;
   while(s!=e){
    int mid=(s+(e-s)/2);
    if(arr[mid]>=x){
        e=mid;
    }else{
        s=mid+1;
    }
   }
   vector<int>ans;
  if(arr[s]!=x){
    return vector<int>{-1,-1};
   }
  ans.push_back(s);
   
   
   s=0,e=n-1;
   while(s!=e){
    int mid=(s+(e-s+1)/2);
    if(arr[mid]<=x){
        s=mid;
    }else{
        e=mid-1;
    }
   }
   ans.push_back(s);
   return ans;
}

int main(){
    int n=9;
    int x=5;
    int arr[n]={1, 3, 5, 5, 5, 5, 67, 123, 125};
    vector<int> ans;
        ans=funct(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
}