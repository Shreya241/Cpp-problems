#include <iostream>
#include <vector>

using namespace std;

void sol(int t) {
    while(t--){
        int n;
        cin >> n;

        if (n % 2 != 0) {
            cout << -1 << endl;
        } else {
            vector<int> v(n);
            for (int j = n; j >= 1; j--) {
                v[n - j] = j;
            }
            for (int j = 0; j < n; j++) {
                cout << v[j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int T;
    cin >> T;

    sol(T);

    return 0;
}
