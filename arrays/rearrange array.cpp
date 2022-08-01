#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void funct(int arr[], int n)
{
    int m = n / 2;
    vector<int> v, p;
    for (int i = 0; i < m; i++)
    {
        v.push_back(arr[i]);
    }
    for (int i = m; i < n; i++)
    {
        p.push_back(arr[i]);
    }

    reverse(v.begin(),v.end());
    int i = 0;

    while (i < n)
    {
        if (i%2==0)
        {
            int x=p.back();
            p.pop_back();
            arr[i]=x;
            i++;
        }
        else 
        {
            int x=v.back();
            v.pop_back();
            arr[i]=x;
            i++;
        }
    }
}

int main()
{
    int n = 11;
    int arr[n] = {10,20,30,40,50,60,70,80,90,100,110};
    funct(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}