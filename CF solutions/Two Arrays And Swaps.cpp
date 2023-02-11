#include<iostream>
#include <numeric>
#include<algorithm>  
using namespace std;
 
 
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;cin>>n>>k;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
      cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
      cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n,greater<int>());
    int c=0;
    int sum=0;
    int j=0;int i=0;
    while(c<k && i<n && j<n){
       if(arr1[i]<arr2[j]){
        swap(arr1[i],arr2[j]);
        i++;j++;c++;
       }else{
        break;
       }
    }
    cout<<accumulate(arr1,arr1+n,sum)<<endl;
  }
}