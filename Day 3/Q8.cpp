// Problem: Read the workout duration in minutes and convert it to seconds.
// Approach: Multiply the given minutes by 60 and print the result.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int min;
    cin>>min;
    int sec=min*60;
    cout <<sec<<endl;
    return 0;
}