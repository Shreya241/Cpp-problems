#include <iostream>
#include <algorithm>
using namespace std;
int rearra(int arr[], int n){
    int left=0;
    int right=n-1;
    int m=arr[n-1]+1;
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=(arr[right]%m)*m + arr[i];
            right--;
        }
        else
        {
            arr[i]=(arr[left]%m)*m +arr[i];
            left++;
        }
    }
    for(int i=0;i<n;i++)
        arr[i]=arr[i]/m;
        return;
     

}