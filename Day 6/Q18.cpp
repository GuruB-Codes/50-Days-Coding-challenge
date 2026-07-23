// Problem: Read the heights of three skyscrapers and print the tallest one.
// Approach: Compare the three heights (or use max) and output the largest value.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int h1, h2, h3;
    cin >> h1 >> h2 >> h3;
    cout << max({h1, h2, h3}) << endl;
    return 0;
}