// Problem: Read a product ID and determine whether it is a prime number.
// Approach: If N > 1 and has no divisors other than 1 and itself, print "Premium Product"; otherwise, print "Regular Product".
// Time: O(√N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0||n%3==0) return false;
    for (int i=5;i*i<=n;i+=6) {
        if (n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
int main() {
    int productId;
    cin >> productId;
    if (isPrime(productId)) {
        cout << "Premium Product" << endl;
    } else {
        cout << "Regular Product" << endl;
    }
    return 0;
}