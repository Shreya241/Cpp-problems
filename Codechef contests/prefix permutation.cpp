#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> generate_permutation(int N) {
    vector<int> P;
    P.push_back(1);

    for (int i = 2; i <= N; i++) {
        int sum_so_far = 0;
        for (int j = 0; j < i-1; j++) {
            sum_so_far += P[j];
        }

        for (int j = 1; j <= N; j++) {
            if (find(P.begin(), P.end(), j) == P.end() && (sum_so_far + j) % i != 0) {
                P.push_back(j);
                break;
            }
        }
    }

    return P;
}

int main() {
    int N = 5;
    vector<int> P = generate_permutation(N);
    for (int i = 0; i < N; i++) {
       cout << P[i] << " ";
    }
    cout << endl;

    return 0;
}
