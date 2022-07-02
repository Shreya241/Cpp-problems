#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void peak(int arr[], int n)
{ int i=0;
int s=0;
int sum=(n*(n+1))/2;
   while(i<n-1){
     s+=arr[i];
     i++;
   }
   cout<<sum-s;
     
   }

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,5};
    peak(arr, n);
}