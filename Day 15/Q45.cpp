// Problem: Read N and print the first N terms of the series 1, 3, 4, 8, 15, 27, ...
// Approach: Generate each term according to the given series pattern and print the first N terms.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of terms (N): ";
    cin>>N;

    cout<<"Series: ";
    int a = 1, b = 3; // First two terms
    for(int i=0; i<N; i++){
        if(i == 0) {
            cout<<a<<" ";
        } else if(i == 1) {
            cout<<b<<" ";
        } else {
            int nextTerm = a + b; // Next term is the sum of the previous two terms
            cout<<nextTerm<<" ";
            a = b; // Update a to the previous term
            b = nextTerm; // Update b to the current term
        }
    }
    cout<<endl;
    return 0;
}