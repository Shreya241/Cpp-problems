#include<bits/stdc++.h>
using namespace std;

void common(int n,int m, int o, int arr1[], int arr2[], int arr3[]){
   int i=0,j=0,k=0;
   while(i<n && j<m && k<o){
   if(arr1[i]<arr2[j] && arr1[i]<arr3[k]){
    i++;
   }else if(arr2[j]<arr1[i] && arr2[j]<arr3[k]){
    j++;
   }else if(arr3[k]<arr1[i] && arr3[k]<arr2[j]){
    k++;
   }else if(arr1[i]==arr2[j]==arr3[k]){
    cout<<arr1[i];
    i++;j++;k++;
   }
   }
}

int main(){
int n1 = 6, A[n1] = {1, 5, 10, 20, 40, 80};
int n2 = 5, B[n2] = {6, 7, 20, 80, 100};
int n3 = 8, C[n3] = {3, 4, 15, 20, 30, 70, 80, 120};
 common(n1,n2,n3,A,B,C);
}