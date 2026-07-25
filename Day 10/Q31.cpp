// Problem: Read an integer N and count the number of 1s (set bits) in its binary representation.
// Approach: Validate the input range, then repeatedly count set bits using bitwise operations (or Brian Kernighan's algorithm); otherwise, print "Wrong Input".
// Time: O(number of set bits), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n<0||n>1000) {
        cout<<"Wrong Input"<<endl;
        return 0;
    }
    int count=0;
    while(n>0) {
        count+=n&1;
        n>>=1;
    }
    cout<<count<<endl;
    return 0;
}