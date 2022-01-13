#include<bits/stdc++.h>
using namespace std;

int num(int n){
    int count=1;
    if(n<10){
       return 1;;
    }
    return(num(n/10)+(count++));
}

int main(){
   cout<< num(777);
}