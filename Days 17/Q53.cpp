// Problem: Read N and print an hourglass pattern with 2N-1 stars in the first row.
// Approach: Print decreasing odd numbers of stars to the middle, then mirror the pattern to expand back.
// Time: O(N²), Space: O(1)

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * (N - i) + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * (N - i) + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}