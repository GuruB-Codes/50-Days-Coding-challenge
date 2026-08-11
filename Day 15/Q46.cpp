// Problem: Read N and generate the series 2, 1, 4, 3, 6, 5, ... up to N terms.
// Approach: For each position, print an even number (2, 4, 6, ...) at odd positions and the corresponding odd number (1, 3, 5, ...) at even positions.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of terms (N): ";
    cin>>N;

    cout<<"Series: ";
    for(int i=1; i<=N; i++){
        if(i % 2 == 1) {
            cout<<i + 1<<" "; // Even number at odd positions
        } else {
            cout<<i - 1<<" "; // Odd number at even positions
        }
    }
    cout<<endl;
    return 0;
}