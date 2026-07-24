// Problem: Read an integer N and calculate the sum of all prime numbers from 2 to N.
// Approach: Check each number for primality, add all prime numbers to the sum, and return 0 if N ≤ 1.
// Time: O(N√N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n<=1) return false;
    if (n<=3) return true;
    if (n%2==0||n%3==0) return false;
    for (int i=5;i*i<=n;i+=6) {
        if (n%i==0||n%(i+2)==0) return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    long long sum = 0;
    for (int i=2;i<=n;i++) {
        if (isPrime(i)) {
            sum+=i;
        }
    }
    cout <<sum;
    return 0;
}