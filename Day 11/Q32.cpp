// Problem: Read a number N and a position K, then find the Kth digit from the left.
// Approach: Convert the number to a string (or count digits); if K is within the length, return the Kth digit, otherwise return -1.
// Time: O(d), Space: O(d)

#include<bits/stdc++.h>
using namespace std;    

int main() {
    int N,K;
    cin >>N>>K;
    string s=to_string(N);
    if (K>0&&K<=s.length()) {
        cout<<s[K-1]<<endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}