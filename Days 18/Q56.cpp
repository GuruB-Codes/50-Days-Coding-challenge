// Problem: Read N and print a decremental number pyramid, starting from N(N+1)/2 and decreasing by 1.
// Approach: Start with total = N(N+1)/2, print N numbers in the first row, then N-1, ..., 1 number in the last row.
// Time: O(N²), Space: O(1)

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total = N * (N + 1) / 2; 

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << total-- << " "; 
        }
        cout << endl;
    }

    return 0;
}