// Problem: Read a year and determine whether it is a leap year.
// Approach: A leap year is divisible by 4 and not by 100, unless it is also divisible by 400.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    if ((year%4==0&&year%100!=0)||(year%400==0)) {
        cout<<"Leap Year"<<endl;
    } else {
        cout<<"Not a Leap Year"<<endl;
    }
    return 0;
}