// Problem: Find how many times the second-largest distinct element occurs in the array.
// Approach: Find the largest and second-largest distinct values, then count occurrences of the second largest. Return 0 if no second-largest element exists or all elements are equal.
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

    // Find the largest and second-largest distinct values
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << 0 << endl;
        return 0;
    }

    // Count occurrences of the second-largest element
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == secondLargest) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}