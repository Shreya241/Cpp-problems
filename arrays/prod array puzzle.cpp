#include <bits/stdc++.h>
using namespace std;

int funct(int nums[], int n)
{
        vector<int>v;
        long long int prod=1,count=0,temp=1,f=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
          {
              f=1;count++;
              continue;
          }
          prod*=nums[i];
        }
        for(int i=0;i<n;i++){
             if(f==1)
          {
              if(nums[i]==0 && count==1)
              {
                  v.push_back(prod);
              }
              else 
              {
                  v.push_back(0);
              }
              
          }
          else
          {
              temp=prod/nums[i];
              v.push_back(temp);
          }
        }
    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}

int main()
{
    int n = 2;
    int arr[n] = {12,0};
    funct(arr,n);
}