#include <bits/stdc++.h>
using namespace std;
int wave(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1;
    int i = 0;
    int k;
    while (i < n)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            k=i;
            i++;
        }
        else
        {
            i++;
            count = 1;
        }
        if (count > n / 2)
        {
            return arr[k];
        }
    }
    return -1;
}

int main()
{
    int n = 3;
    int a1[n] = {1,2,3};
    cout << wave(a1, n);
}