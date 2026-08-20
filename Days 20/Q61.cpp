// Problem: Find the missing number from the sequence 1 to N in an unsorted array.
// Approach: Use the formula N(N+1)/2 and subtract the sum of all array elements.
// Time: O(N), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = arr.size();

    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << total - sum << endl;
    return 0;
}