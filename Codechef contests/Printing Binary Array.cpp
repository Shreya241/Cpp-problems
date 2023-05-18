#include <iostream>
#include <vector>

using namespace std;

vector<int> generateArray(const vector<int>& A) {
    int N = A.size();
    vector<int> C(N, 0);

    // Generate C array with the same score as A
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            C[i] = A[i] == 0 ? 1 : 0;
        } else {
            C[i] = A[i];
        }
    }

    return C;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> C = generateArray(A);

        // Print the resulting array
        for (int i = 0; i < N; i++) {
            cout << C[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
