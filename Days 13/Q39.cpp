// Problem: Read an integer N and generate the first N terms of the series starting from 2, where each term increases by successive multiples of 13.
// Approach: Start with 2, then repeatedly add (i × 13) for i = 1, 2, 3, ... and print each term.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of terms: ";
    cin>>N;
    int term=2;
    for(int i=1;i<=N;i++){
        cout<<term<<" ";
        term+=i*13;
    }
    cout<<endl;
    return 0;
}