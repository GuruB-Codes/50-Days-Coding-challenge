// Problem: Read the length and breadth of a rectangle, then calculate its perimeter and area.
// Approach: Use Perimeter = 2 × (L + B) and Area = L × B, then print the results.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int len, br;
    cin >>len>>br;
    int peri=2*(len+br);
    int area=len*br;
    cout <<"Perimeter: "<<peri<<endl;
    cout <<"Area: "<<area<<endl;
    return 0;
}