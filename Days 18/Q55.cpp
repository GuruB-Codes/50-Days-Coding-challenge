// Problem: Read N and print a number pyramid where consecutive numbers continue across rows.
// Approach: Use a counter starting at 1; print i consecutive numbers in row i, then continue the counter in the next row.
// Time: O(N²), Space: O(1)
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int counter = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << counter++;
        }
        cout << endl;
    }

    return 0;
}