#include <iostream>
using namespace std;

int sub(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;
    for (i = 1; i <= n; i++)
    {
        if (i < n)
            curr_sum = curr_sum + arr[i];

        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if (curr_sum == sum)
        {
            cout<<"Sum found between indexes "<<start<<" and "<<(i-1)<<endl;
            return 1;
        }
    }
    cout<<("No subarray found"); 
	return 0; 
}

int main() 
{ 
	int arr[] = {15, 2, 4, 8, 9, 5, 10, 23}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int sum = 23; 
	sub(arr, n, sum); 
	return 0; 
}