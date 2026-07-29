// Problem: Read an integer N and print the total land area after each expansion, starting with an initial area of 4.
// Approach: Initialize total area as 4, then repeatedly add i² (for i = 1, 2, 3, ...) and print the updated total after each expansion.
// Time: O(N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of expansions: ";
    cin>>N;
    int total_area=4;
    for(int i=1;i<=N;i++){
        total_area+=i*i;
        cout<<total_area<<" ";
    }
    cout<<endl;
    return 0;
}