#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[6]={1,7,3,4,5,6};
  int n=6;
 vector<int>v;
       for(int i=1;i<n;i++){
           if(arr[i]!=arr[i-1]){
               v.push_back(arr[i-1]);
           }
       }
       for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
       }
}