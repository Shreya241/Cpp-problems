#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
  int t;cin>>t;
  while(t--){
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  int min=INT_MAX;
  int fmin=INT_MAX;
  for(int i=1;i<n;i++){
    min=arr[i]-arr[i-1];
    fmin=std::min(min,fmin);
}
cout<<fmin<<endl;
  }
}