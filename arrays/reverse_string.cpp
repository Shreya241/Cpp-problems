#include<bits/stdc++.h>
using namespace std;

void fact(string s){
    int n=s.length();
   int i=0,j=n-1;
   while(i<j){
    swap(s[i],s[j]);
    i++;
    j--;
   }
   cout<<s;
}

int main(){
string s="Geeks";
fact(s);
}