#include<iostream>
using namespace std;

int SumDig(int n){
    if(n<10){
        return n;
    }
    return(SumDig(n/10)+n%10);
    
}

int main(){
    int n;cin>>n;
    cout<<SumDig(n);
}