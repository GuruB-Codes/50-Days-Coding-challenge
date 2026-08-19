// Problem: Read N and print a diamond pattern with N rows in the upper half.
// Approach: Print the upper half with increasing stars (1, 3, 5, ...), then print the lower half in reverse.
// Time: O(N²), Space: O(1)

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Print upper half
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print lower half
    for (int i = N - 1; i >= 1; i--) {
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