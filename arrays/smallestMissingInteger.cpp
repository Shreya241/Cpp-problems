#include <iostream>
#include <algorithm>
using namespace std;
int integ(int arr[], int n)
{
    sort(arr + n, arr);

    int min = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i] == min)
            {
                min++;
            }
        }
    }
    return min;
}