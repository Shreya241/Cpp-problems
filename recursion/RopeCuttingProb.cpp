#include<bits/stdc++.h>
using namespace std;

int num(int n, int a, int b,int c){
    if(n==0) return 0;
    if(n<0) return -1;
    int res= max(num(n-a,a,b,c),
                 num(n-b,a,b,c),
                 num(n-c,a,b,c));
    if(res==-1){
        return -1;
    }             
    return res+1;
    
}

int main(){
    
}