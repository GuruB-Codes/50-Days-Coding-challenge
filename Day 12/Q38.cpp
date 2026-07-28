// Problem: Read an integer N and print the first N terms of the series starting from 95.0, increasing by 20.5 each term.
// Approach: Initialize the first term as 95.0, add 20.5 in each iteration, and print every term formatted to one decimal place.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of terms: ";
    cin>>N;
    double term=95.0;
    for(int i=0; i<N; i++){
        cout<<fixed<<setprecision(1)<<term<<" ";
        term+=20.5;
    }
    cout<<endl;
    return 0;
}