#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void peak(int arr[], int n)
{
     int i=0,j=n-1;
     while(i<j){
        int mid=(i+j)/2;
        if(arr[mid]<arr[mid+1]){
            i=mid+1;
        }else{
            j=mid;
        }
     }
     cout<< i;
   }

int main()
{
    int n = 3;
    int arr[n] = {1,2,3};
    peak(arr, n);
}