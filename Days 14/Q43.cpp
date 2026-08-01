// Problem: Read a positive integer N and generate its Collatz sequence until it reaches 1.
// Approach: While N != 1, print N; if N is even, divide it by 2, otherwise replace it with 3×N + 1. Finally, print 1.
// Time: O(k), Space: O(1)   // k = number of terms in the sequence

#include<bits/stdc++.h> 
using namespace std;
int main(){
    long long N;
    cout<<"Enter a positive integer: ";
    cin>>N;
    if(N<=0){
        cout<<"Please enter a positive integer."<<endl;
        return 1;
    }
    cout<<"Collatz sequence: ";
    while(N!=1){
        cout<<N<<" ";
        if(N%2==0){
            N/=2;
        }else{
            N=3*N+1;
        }
    }
    cout<<1<<endl; 
    return 0;
}