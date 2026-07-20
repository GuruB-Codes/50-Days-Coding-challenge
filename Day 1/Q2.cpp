// Problem: Read a username and print "Welcome" followed by the name using a tab space.
// Approach: Take the username as input and display it with the required formatting.
// Time: O(n), Space: O(1)

#include<bits/stdc++.h>
using namespace std;    
int main(){
    string name;
    cin >> name;
    cout << "Welcome\t" << name << endl;
    return 0;
}