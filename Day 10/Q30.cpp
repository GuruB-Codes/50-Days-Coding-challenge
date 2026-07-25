// Problem: Read an integer N and find its largest prime divisor (excluding 1 and N).
// Approach: Check all divisors of N, identify the prime divisors, and return the largest one; if none exist, return -1.
// Time: O(√N), Space: O(1)

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
    int largestPrimeDivisor=-1;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            if(isPrime(i)) {
                largestPrimeDivisor=max(largestPrimeDivisor,i);
            }
            if(isPrime(n/i)){
                largestPrimeDivisor=max(largestPrimeDivisor,n/i);
            }
        }
    }
    cout<<largestPrimeDivisor<<endl;
    return 0;
}