#include<bits/stdc++.h>
using namespace std;

void rep(int arr[],int n){
    int m;int fm=INT_MIN;
    vector<int>ans;
    ans.push_back(1);
   int j=1;
   while(j<n){
    if(arr[j]<arr[j-1]){
        ans.push_back(1);
    }else{
        for(int i=j-1;i>=0;i--){
            if(arr[j]>arr[i]){
                m=(j-i)+1;
                fm=max(fm,m);

            }else if(arr[j]<arr[i]){
                ans.push_back(fm);
            }
           
        }
         ans.push_back(fm);
         fm=0;
    }
   j++;
   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
   }


int main(){
    int n=6;
    int arr[n]={10 ,4, 5, 90, 120, 80};
    rep(arr,n);
}