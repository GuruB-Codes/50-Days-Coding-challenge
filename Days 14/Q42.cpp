// Problem: Read an integer N and print the first N square numbers.
// Approach: Iterate from 1 to N, compute i² for each value, and print the series.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of terms: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<i*i<<" ";
    }
    cout<<endl;
    return 0;
}