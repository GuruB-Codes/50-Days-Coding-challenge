// Problem: Check whether all elements become consecutive after sorting, with no duplicates.
// Approach: Sort the array and verify that every adjacent pair differs by exactly 1. Return 1 if true, otherwise 0.
// Time: O(N log N), Space: O(1) (excluding sorting)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4, 1, 2, 3, 5};
    int n = arr.size();

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] != 1) {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << 1 << endl;
    return 0;
}