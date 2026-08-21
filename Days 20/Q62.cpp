// Problem: Count how many houses have a number of stairs that Alice can climb using jumps of 3 stairs.
// Approach: Count the array elements divisible by 3.
// Time: O(N), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 3 == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}