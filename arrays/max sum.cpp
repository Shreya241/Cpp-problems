#include <bits/stdc++.h>
using namespace std;

int funct(int arr[], int n)
{
        int ans=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            ans+=i*arr[i];
        }
        return ans;
}

int main()
{
    int n = 5;
    int arr[n] = {-5, 3, 2, 4, 1};
    cout<<funct(arr,n);
}