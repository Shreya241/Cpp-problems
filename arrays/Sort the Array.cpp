#include<iostream>
#include<vector>
using namespace std;
 
int main(){
  int n;cin>>n;
  int arr[n];int prr[n];
  int c=0;vector<int>v;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    prr[i]=arr[i];
  }
   sort(prr,prr+n);
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]!=prr[i]){
        c++;
        v.push_back(i+1);
    }
  }
  if(c==2){
    cout<<"yes"<<endl;
    cout<<min(v[1],v[0])<<" "<<max(v[1],v[0]);
  }else if(c==0){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1;
  }else{
    cout<<"no"<<endl;
  }
}