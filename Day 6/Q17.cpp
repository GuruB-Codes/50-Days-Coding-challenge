// Problem: Calculate the total car rental cost based on travel time and two hourly rates.
// Approach: Convert minutes to hours using ceiling. Charge R1 for the first N hours and R2 for any additional hours, then compute the total cost.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tT,N,R1,R2;
    cin >> tT>>N>>R1>>R2;
    int hours = (tT+59)/60;
    int totalCost = 0;
    if (hours<=N) {
        totalCost=hours*R1;
    } else {
        totalCost=N*R1+(hours-N)*R2;
    }
    cout<<totalCost<<endl;
    return 0;
}