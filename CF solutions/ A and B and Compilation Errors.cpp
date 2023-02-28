#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin>>n;
int k=0;
int p=0;
int arr1[n],arr2[n-1],arr3[n-2];
for(int i=0;i<n;i++){
    cin>>arr1[i];
    k=k^arr1[i];
}
for(int i=0;i<n-1;i++){
    cin>>arr2[i];
    k=k^arr2[i];
    p=p^arr2[i];
}
for(int i=0;i<n-2;i++){
    cin>>arr3[i];
    p=p^arr3[i];
}
cout<<k<<endl<<p;
}