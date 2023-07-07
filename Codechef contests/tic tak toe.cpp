#include <bits/stdc++.h>
#define int long long
using namespace std;
bool checkWin(const vector<string>& grid, char symbol) {

    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol)
            return true;
    }

    for (int j = 0; j < 3; j++) {
        if (grid[0][j] == symbol && grid[1][j] == symbol && grid[2][j] == symbol)
            return true;
    }

    if (grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol)
        return true;
    if (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol)
        return true;

    return false;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(3);
        for (int i = 0; i < 3; i++) {
            cin >> grid[i];
        }

        bool xWon = checkWin(grid, 'X');
        bool oWon = checkWin(grid, 'O');
        bool plusWon = checkWin(grid, '+');

        if (xWon) {
            cout << "X" << endl;
        } else if (oWon) {
            cout << "O" << endl;
        } else if (plusWon) {
            cout << "+" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}
