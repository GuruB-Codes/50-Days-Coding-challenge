// Problem: Read an integer N and print the first N terms of the series starting from 0.5, where each term is 3 times the previous one.
// Approach: Initialize the first term as 0.5, repeatedly multiply it by 3, and print each term formatted to one decimal place.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter the number of terms: ";
    cin>>N;
    double term=0.5;
    for(int i=0; i<N; i++){
        cout<<fixed<<setprecision(1)<<term<<" ";
        term*=3;
    }
    cout<<endl;
    return 0;
}