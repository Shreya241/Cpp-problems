#include<iostream>
using namespace std;

int divisors(int n){
    int tot=0;
    while(n--){
    int count=0;
    int i=1;
    while(i<=n){
    if(n%i==0){
        count++;
    }
    i++;
 }
 if(count==3){
     tot++;
 }
 
    }
    return tot;
}
int main(){
    int n;cin>>n;
    cout<<divisors(n);
}