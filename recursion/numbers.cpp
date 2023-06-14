#include <iostream>
#include <string>
using namespace std;

void print_number(int n) {
    if (n == 1) {
        cout << "5" << endl;
    } else if (n == 2) {
        cout << "6" << endl;
    } else {
        print_number(n - 2);
        print_number(n - 1);
    }
}

void print_numbers(int n) {
    if (n <= 0) {
        return;
    }

    print_numbers(n - 1);
    print_number(n);
}

int main() {
    int n = 10; // Change this value to print a different number of terms
    print_numbers(n);

    return 0;
}
