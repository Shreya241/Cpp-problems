#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int funct(int arr1[],int arr2[],int n){
  vector<pair<int,int>>v;
  for(int i=0;i<n;i++){
    v.push_back({arr2[i],arr1[i]});
  }

  int c=1;
  sort(v.begin(),v.end());
  int prev=v[0].first;
  for(int i=1;i<n;i++){
    if(v[i].second>prev){
        c++;
        prev=v[i].first;
    }
  }
  return c;
}

int main(){
    int n=4;
    int start[] = {1, 3, 2, 5};
    int end[] = {2, 4, 3, 6};
    cout<<funct(start,end,n);
}