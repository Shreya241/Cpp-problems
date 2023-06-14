#include<iostream>
using namespace std;

int SumDig(int n,int sum){
    if(n==0){
        return sum;
    }
    return(SumDig(n-1,sum+n));
    
}

int main(){
    int n;cin>>n;
    int sum=0;
    cout<<SumDig(n,sum);
}