// Problem: Read the number of days (n) and calculate the total coins donated as the sum of squares from 1 to n.
// Approach: Compute 1² + 2² + ... + n² (or use the formula n(n+1)(2n+1)/6) and print the total.
// Time: O(n) (or O(1) using the formula), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long total_coins=0;
    for (int i = 1; i <= n; ++i) {
        total_coins+=static_cast<long long>(i)*i; // Calculate square and add to total
    }
    cout<<"Total coins donated: "<<total_coins<<endl;
    return 0;
}