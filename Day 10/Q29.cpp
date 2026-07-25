// Problem: Read an integer N and split it into positive integers to obtain the maximum possible product.
// Approach: Break N into as many 3's as possible; if the remainder is 1, replace 3 + 1 with 2 + 2, then multiply all parts.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n==1) {
        cout<<1<<endl;
        return 0;
    }
    if(n==2){
        cout<<2<<endl;
        return 0;
    }
    if (n==3){
        cout<<3<<endl;
        return 0;
    }
    int result = 1;
    while(n>4) {
        result*= 3;
        n-=3;
    }

    result*=n;
    cout<<result << endl;

    return 0;
}