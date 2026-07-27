// Problem: Read a binary number (as an integer) and convert it to its decimal equivalent.
// Approach: Process each binary digit from right to left, multiply it by the corresponding power of 2, and sum the results.
// Time: O(d), Space: O(1)   // d = number of binary digits

#include<bits/stdc++.h>
using namespace std;

int convertToDecimal(int binary) {
    int decimal=0;
    int power=1;
    while(binary>0) {
        int digit=binary%10;
        decimal+=digit*power;
        power*=2;
        binary/=10;
    }
    return decimal;
}

int main(){
    int binary;
    cout<<"Enter a binary number: ";
    cin>>binary;
    cout<<"Decimal equivalent: "<<convertToDecimal(binary)<<endl;
    return 0;
}