#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void leaders1(int arr[],int n){
for(int i=0;i<n;i++){
    bool flag=true;
    for(int j=i+1;j<n;j++){
        if(arr[i]<=arr[j]){
            flag=false;
            break;
        }
    }
    if(flag==true){cout<<arr[i]<<" ";}
}
}

//effecient method

vector<int> leaders(int a[], int n){
    vector<int>v;

 int curr_ldr=a[n-1];
v.push_back(curr_ldr);
 for(int i=n-2;i>=0;i--){
    if(curr_ldr<=a[i]){
        curr_ldr=a[i];
        v.push_back(curr_ldr);
    }
 }
 sort(v.begin(),v.end(), greater<int>());
       return v;
}

int main(){
    int arr[5]={7,10,4,3,6};
    int n=5;
    vector<int> v= leaders(arr,n);
    for(auto i=v.begin();i!=v.end();i++){
       cout<<*i<<" ";
    }
}