#include<bits/stdc++.h>
using namespace std;
int num(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
        
    }
    if(sum<10)
        return sum;
    return num(sum);
}

int main(){
   cout<< num(99999);
}