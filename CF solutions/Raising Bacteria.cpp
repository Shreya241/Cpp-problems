#include<iostream>
using namespace std;
int main(){
    int c=1;
    int n;cin>>n;
    while(n>0){
      if(n%2==0){
        n=n/2;
      }else if(n!=1){
        c++;
        n=n-1;
      }else{
        break;
      }
    }
    cout<<c;
}