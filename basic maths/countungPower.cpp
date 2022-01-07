#include<iostream>
using namespace std;

int pow(int a,int b){
    int res=1;
    while(b!=0){
      res=res*a;
      b--;
    }
    return res;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
    return 0;
}