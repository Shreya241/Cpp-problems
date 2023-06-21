#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll sumOfVertexNumbers(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n;
        n /= 2;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll sum = sumOfVertexNumbers(n);
        cout << sum << endl;
    }

    return 0;
}
