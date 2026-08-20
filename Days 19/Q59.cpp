// Problem: Find the maximum possible sum of any two elements in the array.
// Approach: Track the two largest elements and return their sum; if fewer than 2 elements exist, return 0.
// Time: O(N), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4, 1, 2, 2, 3, 3, 5, 5};
    int n = arr.size();

    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find the two largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << largest + secondLargest << endl;
    return 0;
}