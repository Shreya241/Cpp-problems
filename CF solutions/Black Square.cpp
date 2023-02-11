#include<iostream>
#include <string>
using namespace std;
 
 
int main(){
  int arr[4];
  for(int i=0;i<4;i++){
    cin>>arr[i];
  }
  string s;
  cin>>s;
  int sum=0;
  for(int i=0;i<s.length();i++){
    int p=(int)s[i]-'0';
    sum+=arr[p-1];
}
cout<<sum<<endl;
}