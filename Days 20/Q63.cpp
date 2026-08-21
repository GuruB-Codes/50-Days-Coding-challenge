// Problem: Reverse the given array of sensor readings and print the elements in reverse order.
// Approach: Traverse the array from the last element to the first and print each element.
// Time: O(N), Space: O(1)


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}