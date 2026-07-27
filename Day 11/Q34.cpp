// Problem: Read an item ID and determine whether it is a Strong Number.
// Approach: Extract each digit, sum the factorial of its digits, and compare the sum with the original number.
// Time: O(d), Space: O(1)   // d = number of digits

#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n==0)return 1;
    return n*factorial(n-1);
}

bool isStrongNumber(int num) {
    int original = num;
    int sum = 0;
    while (num > 0) {
        int digit=num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum==original;
}

int main() {
    int itemID;
    cout << "Enter the item ID: ";
    cin >> itemID;
    if (isStrongNumber(itemID)) {
        cout << "The item ID is a Strong Number." << endl;
    } else {
        cout << "The item ID is not a Strong Number." << endl;
    }
    return 0;
}