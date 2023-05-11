#include <iostream>
#include <string>

using namespace std;

// Function to check if a number contains digit 4
bool containsFour(long long num) {
    while (num > 0) {
        if (num % 10 == 4) {
            return true;
        }
        num /= 10;
    }
    return false;
}

// Function to get the k-th number in the living sequence
long long getKthLivingNumber(long long k) {
    long long num = 1;
    while (k > 0) {
        if (!containsFour(num)) {
            k--;
        }
        if (k == 0) {
            break;
        }
        num++;
    }
    return num;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << getKthLivingNumber(k) << endl;
    }
    return 0;
}
