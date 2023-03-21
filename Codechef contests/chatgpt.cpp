#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n][m];
        for (int i = 0; i < n; i++) {
            int val = i * m + 1;
            for (int j = 0; j < m; j++) {
                arr[i][j] = val + j;
            }
        }
        while (k--) {
            int q, x, v;
            cin >> q >> x >> v;
            x--;
            if (q == 0) {
                for (int j = 0; j < m; j++) {
                    arr[x][j] *= v;
                }
            } else if (q == 1) {
                for (int i = 0; i < n; i++) {
                    arr[i][x] *= v;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < n * m; i++) {
            sum += arr[i / m][i % m];
        }
        cout << sum << endl;
    }
    return 0;
}