#include <iostream>
#include <vector>

const int MOD = 1000000007;

std::vector<std::vector<int>> sol(int n, int k) {
    std::vector<std::vector<int>> C(n + 1, std::vector<int>(k + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= std::min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
        }
    }

    return C;
}

int fac(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial = (factorial * i) % MOD;
    }
    return factorial;
}

int countWays(int n, int k) {
    std::vector<std::vector<int>> C = sol(n, k);

    int ways = (1LL * C[n][k] * fac(k)) % MOD;
    return ways;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, K;
        std::cin >> N >> K;

        int ways = countWays(N, K);
        std::cout << ways << std::endl;
    }

    return 0;
}
