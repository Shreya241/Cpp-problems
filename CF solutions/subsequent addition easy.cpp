#include <bits/stdc++.h>
using namespace std;

int t, n, c[5005];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        int sum = 0, mx = 0;
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
            sum += c[i];
            mx = max(mx, c[i]);
        }
        if (sum % 2 == 1 || mx > sum / 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
