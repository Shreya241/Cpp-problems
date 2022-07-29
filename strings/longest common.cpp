#include<bits/stdc++.h>
using namespace std;


string para(int n,string p){
    int count=0;

    int m=p.size();
   while(count<n){
    for(int i=0;i<=m;i++){
        for(int j=m-1;j>=0;j--){
            if(p[j]>p[i] && j<i){
                swap(p[i],p[j]);
                count++;
            }
        }
    }
   }
    return p;
}

int main(){
    int n=4;
    string str = "1234567";
    cout<<para(n,str);
}