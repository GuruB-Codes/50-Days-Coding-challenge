// Problem: Read N and print a left-aligned half-pyramid of stars with increasing stars in each row.
// Approach: Use nested loops; for row i, print N-i leading spaces followed by i stars.
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
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}