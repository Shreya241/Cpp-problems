#include<iostream>
using namespace std;

bool isLucky(int n){
   static int i=2,np;

    if(i>n){
        return true;
    }
    if(n%i==0){
        return 0;
    }
    np=n;
    np=np-(np/i);
    i++;
    return isLucky(np);
    
}

int main(){
    int n;cin>>n;
    cout<<isLucky(n);
}