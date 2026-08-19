// Problem: Read N and print an inverted left half-pyramid, decreasing the number of stars in each row.
// Approach: For each row, print increasing leading spaces followed by decreasing stars.
// Time: O(N²), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int k = 1; k <= N - i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}