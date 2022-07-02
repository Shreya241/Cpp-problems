#include<bits/stdc++.h>
using namespace std;
int wave(int arr[],int n){
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for (int i=0;i<n;i++) 
        if (m[arr[i]] == 1)
            return arr[i];
            
    return 0;
}

int main(){
   int n=5;
   int a1[n] = {1,-1,-1,1,2};
   cout<<wave(a1,n);

}