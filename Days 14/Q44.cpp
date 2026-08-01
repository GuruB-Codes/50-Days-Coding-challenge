// Problem: Read the first term (a), common ratio (r), and number of terms (n), then generate the geometric progression.
// Approach: Start with the first term and repeatedly multiply it by the common ratio to print the next terms.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, r;
    int n;
    cout<<"Enter the first term (a): ";
    cin>>a;
    cout<<"Enter the common ratio (r): ";
    cin>>r;
    cout<<"Enter the number of terms (n): ";
    cin>>n;

    cout<<"Geometric progression: ";
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a *= r; 
    }
    cout<<endl;
    return 0;
}