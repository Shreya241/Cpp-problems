#include<iostream>
using namespace std;

int countDigits(int n){
    int sum=0;
    while(n>0){
     n=n/10;
     sum++;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
    return 0;
}