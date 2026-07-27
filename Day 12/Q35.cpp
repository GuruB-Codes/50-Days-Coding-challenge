// Problem: Read a non-negative decimal number and convert it to its binary representation.
// Approach: Repeatedly divide the number by 2, store the remainders, then reverse them to obtain the binary equivalent.
// Time: O(log N), Space: O(log N)

#include<bits/stdc++.h>
using namespace std;
string convertToBinary(int num) {
    if (num==0) return "0";
    string binary="";
    while (num>0) {
        binary=to_string(num%2)+binary;
        num/=2;
    }
    return binary;
}
int main() {
    int decimal;
    cout<<"Enter a non-negative decimal number: ";
    cin>>decimal;
    cout<<"Binary representation: "<<convertToBinary(decimal)<<endl;
    return 0;
}