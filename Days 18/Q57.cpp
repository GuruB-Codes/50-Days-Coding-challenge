// Problem: Insert a new product ID into a sorted array while maintaining non-decreasing order.
// Approach: Find the correct insertion position and insert the new ID at that position.
// Time: O(N), Space: O(N)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> productIDs = {101, 103, 105, 107, 109};
    int newID = 106;

    // Find the correct insertion position
    int pos = 0;
    while (pos < productIDs.size() && productIDs[pos] < newID) {
        pos++;
    }

    // Insert the new ID at the correct position
    productIDs.insert(productIDs.begin() + pos, newID);

    // Print the updated array
    for (int id : productIDs) {
        cout << id << " ";
    }
    cout << endl;

    return 0;
}