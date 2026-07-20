// Problem: Read a 4-digit number and find the sum of its first and last digits (ignore any sign).
// Approach: Extract the last digit using % 10, the first digit using repeated division (or /1000 for 4 digits), then add them.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    num=abs(num); // Ensure the number is positive
    int lD=num%10;   
    int fD=num/1000; // For a 4-digit number, dividing by 1000 gives the first digit
    int sum=fD+lD;
    cout<<sum<<endl;
    return 0;
}