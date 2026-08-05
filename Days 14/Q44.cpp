// Problem: Read the first term (a), common ratio (r), and number of terms (n), then generate the geometric progression.
// Approach: Start with the first term and repeatedly multiply it by the common ratio to print the next terms.
// Time: O(N), Space: O(1)

#include <iostream>
using namespace std;

int main() {
    double firstTerm, ratio;
    int terms;

    cin >> firstTerm >> ratio >> terms;

    double current = firstTerm;

    for (int i = 0; i < terms; i++) {
        cout << current << " ";
        current *= ratio;
    }

    return 0;
}
