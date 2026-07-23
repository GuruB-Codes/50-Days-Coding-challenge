// Problem: Read the scores of three candidates and print the second-highest score.
// Approach: Compare the three scores (handling duplicates if present) and output the middle value.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    cout << arr[1] << endl;
    return 0;
}