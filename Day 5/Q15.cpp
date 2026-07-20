// Problem: Read Player A's move (rock, paper, or scissors) and output the winning move for Player B.
// Approach: Use the game rules—Rock → Paper, Paper → Scissors, Scissors → Rock.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    string A;
    cin >>A;
    if(A == "rock"){
        cout<<"paper"<<endl; 
    } else if(A=="paper"){
        cout<<"scissors"<<endl; 
    } else if(A=="scissors"){
        cout<<"rock"<<endl; 
    } else {
        cout<<"Invalid move"<<endl;
    }
    return 0;
}