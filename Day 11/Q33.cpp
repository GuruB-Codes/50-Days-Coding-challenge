// Problem: Count the numbers between n1 and n2 (inclusive) whose digits are all unique.
// Approach: Check each number in the range; if no digit repeats, increment the count, then print the total.
// Time: O((n2 − n1 + 1) × d), Space: O(d)   // d = number of digits

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    int count=0;
    for (int i=n1;i<=n2;i++) {
        string s=to_string(i);
        sort(s.begin(),s.end());
        bool unique=true;
        for (int j=0;j<s.length()-1;j++) {
            if (s[j]==s[j+1]) {
                unique=false;
                break;
            }
        }
        if(unique) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}