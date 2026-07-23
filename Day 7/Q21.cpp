// Problem: Read the customer's age and show time, then determine the movie ticket price.
// Approach: If the show is the matinee (13.30), charge $2.00 for everyone; otherwise, charge $5.00 for adults (age > 13) and $2.00 for children.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    double show_time;
    cin >>age>>show_time;
    if (show_time==13.30) {
        cout<<"Ticket price: $2.00"<< endl;
    } else {
        if (age>13) {
            cout<<"Ticket price: $5.00"<< endl;
        } else {
            cout<<"Ticket price: $2.00"<< endl;
        }
    }
    return 0;
}