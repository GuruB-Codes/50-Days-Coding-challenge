// Problem: Read a member's name and membership type, then display them in the required format.
// Approach: Take both string inputs and print the registration details with labels.
// Time: O(n), Space: O(1)

#include<bits/stdc++.h>
using namespace std;    
int main(){
    string name,memType;
    cin >>name>>memType;
    cout <<"Member Name: "<<name<<endl;
    cout <<"Membership Type: "<<memType<<endl;
    return 0;
}