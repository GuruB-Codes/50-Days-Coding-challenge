// Problem: Read N and print a full pyramid of stars with 1, 3, 5, ... stars in each row.
// Approach: Use nested loops; for row i, print N-i leading spaces followed by (2*i-1) stars.
// Time: O(N²), Space: O(1)

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}