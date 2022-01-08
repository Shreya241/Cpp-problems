#include <bits/stdc++.h> 
using namespace std; 
int oddbits(int arr[],int n){
   int res=0;
   for(int i=0;i<n;i++){
     res=res^arr[i];
   }    
   return res;
}
int main() 
{ 
	int n=7;
    int arr[]={1,2,3,2,2,2,1};
    cout<<oddbits(arr,n);
} 
