// Problem: Read two integers, multiply them, and return the product in a 12-hour clock system.
// Approach: Calculate product = X × Y, then return product % 12 (use 12 if the remainder is 0, if required by the problem).
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >>x>>y;
    int product=x*y;
    int result=product%12;
    if(result==0){
        result=12;
    }
    cout <<result<<endl;
    return 0;
}