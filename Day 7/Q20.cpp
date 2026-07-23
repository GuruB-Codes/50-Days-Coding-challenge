// Problem: Read the investment and earnings, then determine profit, loss, or no profit/no loss.
// Approach: Validate inputs; compare earnings with investment. Calculate percentage = |earnings − investment| × 100 / investment and print the appropriate result.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int main() {
    double inv, ear;
    cin >>inv>>ear;
    if (inv<=0) {
        cout <<"Invalid investment amount."<< endl;
        return 1;
    }
    if (ear< 0) {
        cout << "Invalid earnings amount." << endl;
        return 1;
    }
    double profit = ear- inv;
    double per= (abs(profit)/inv)*100;

    if (profit > 0) {
        cout << "Profit: $"<<profit<<" ("<<fixed<<setprecision(2)<<per<<"%)"<< endl;
    } else if (profit < 0) {
        cout <<"Loss: $"<<abs(profit)<<" ("<<fixed<<setprecision(2)<<per<< "%)"<<endl;
    } else {
        cout <<"No profit, no loss."<<endl;
    }
    return 0;
}