// Problem: Read N and print a hollow square of size N using stars.
// Approach: Print stars for the first/last row and first/last column; print spaces inside.
// Time: O(N²), Space: O(1)

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}