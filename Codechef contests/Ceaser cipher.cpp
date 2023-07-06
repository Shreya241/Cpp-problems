#include <bits/stdc++.h>
using namespace std;


std::string rot_k_cipher(const std::string& str, int k) {
    std::string result = "";
    for (char c : str) {
        if (std::isalpha(c)) {
            char base = std::islower(c) ? 'a' : 'A';
            char rotated_char = ((c - base + k) % 26) + base;
            result += rotated_char;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    int num_queries;
    std::cin >> num_queries;

    for (int i = 0; i < num_queries; ++i) {
        int length;
        std::cin >> length;

        std::string s, t, u;
        std::cin >> s >> t >> u;

        int k = (t[0] - s[0] + 26) % 26;
        std::string cipher_u = rot_k_cipher(u, k);

        std::cout << cipher_u << std::endl;
    }

    return 0;
}
