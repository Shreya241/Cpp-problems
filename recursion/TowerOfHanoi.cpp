#include<bits/stdc++.h>
using namespace std;

long long ToH(int n, char A, char B,char C){
    int sum=0;
     if(n==1){
         cout<<"move disk"<<n<<"from rod"<<from<<"to rod"<<to<<endl;
         return 1;
     }
     sum=1+ToH(n-1,from,aux,to);
     cout<<"move disk"<<n<<"from rod"<<from<<"to rod"<<to<<endl;
     sum+=ToH(n-1,from,aux,to);
     return sum;
}

int main(){
    int n;cin>>n;
    cout<<  ToH(n,'A','B','C');
    return 0;   
}