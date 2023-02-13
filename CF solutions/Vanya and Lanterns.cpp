#include<iostream>
#include <algorithm>
using namespace std;
 
int main(){
  int n,l;
  cin>>n>>l;
  double arr[n];
  double d=0,md=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
 for(int i=1;i<n;i++){
    d=arr[i]-arr[i-1];
    md=max(d,md);
  }
  md=max(md/2,arr[0]-0);
  md=max(md,l-arr[n-1]);
  cout.precision(10);
  cout<<fixed<<md<<endl;
}