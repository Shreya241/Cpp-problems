#include<iostream>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    while(n%2==0){
      n=n/2;
    }
    if(n==1){
      cout<<"no"<<endl;
    }else{
      cout<<"yes"<<endl;
    }
  }
}