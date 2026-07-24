// Problem: Read a year and find the nearest leap year that is greater than or equal to it.
// Approach: If the given year is a leap year, return it; otherwise, increment the year until a leap year is found.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {
    int year;
    cin >> year;
    if (isLeapYear(year)) {
        cout<<year << endl;
    } else {
        while (!isLeapYear(year)) {
            year++;
        }
        cout << year << endl;
    }
    return 0;
}