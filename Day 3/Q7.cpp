// Problem: Read the radius and height of a cylindrical tank, then calculate the water it can store in litres.
// Approach: Compute Volume = 3.14 × R² × H and round the result to the nearest integer.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    double r,h;
    cin >>r>>h;
    double volume=3.14*r*r*h;
    int litres=round(volume);
    cout <<litres<<endl;
    return 0;
}