 // Problem: Read N and print an inverted right half-pyramid with N stars in the first row, decreasing by one star each row.
 // Approach: Use nested loops; for row i, print N-i+1 stars.
 // Time: O(N²), Space: O(1)

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}