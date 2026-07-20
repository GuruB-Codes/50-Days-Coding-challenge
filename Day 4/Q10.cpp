// Problem: Read the number of copies sold, selling price, and printing cost, then calculate the total profit.
// Approach: Profit = (copies × selling price) − (copies × printing cost + 100 fixed cost).
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;    
int main(){
    int copies;
    double sp, pc;
    cin >>copies>>sp>>pc;
    double profit=(copies*sp)-(copies*pc+100);
    cout <<fixed<<setprecision(2)<<profit<<endl;
    return 0;
}