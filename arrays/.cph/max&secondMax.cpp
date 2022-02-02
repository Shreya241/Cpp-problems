#include<iostream>
#include<vector>
using namespace std;

vector<int> maxsec(int arr[],int n){
    int max=arr[0],s_max=-1;
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            s_max=max;
            max=arr[i];
        }
        else if(arr[i]>s_max && arr[i]<max){
            s_max=arr[i];
        }
    }

    if(max==s_max){s_max=-1;}
    vector<int>v1={max,s_max};
    return v1;
}

int main(){
    int n=5;
    int arr[n]={5,7,22,88,5};
    vector<int>ans=maxsec(arr,n);
    cout<<ans[0]<<" "<<ans[1];
}
