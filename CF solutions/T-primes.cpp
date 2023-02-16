#include<iostream>
using namespace std;
 
int main(){
 int n;
 cin>>n;
 while(n--){
    long long a,j=1;
    cin>>a;
    for(long long i=2;i<=a;i++){
        if(a%i==0){
            j++;
        }
    }
    if(j==3){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 }
}