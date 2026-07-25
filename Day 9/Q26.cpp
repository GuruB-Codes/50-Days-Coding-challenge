// Problem: Read a 3-digit number and check whether it is an Armstrong number.
// Approach: Extract each digit, calculate the sum of their cubes, and compare it with the original number.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit; // Calculate cube of the digit and add to sum
        num /= 10; // Remove the last digit
    }

    if (sum == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }

    return 0;
}