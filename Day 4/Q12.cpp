// Problem: Read the temperature and determine if it is safe for outdoor activities.
// Approach: If temperature > 0, print "Safe for outdoor activities."; otherwise, print "Too cold for outdoor activities."
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    cin>>temp;
    if(temp>0){
        cout<<"Safe for outdoor activities.";
    } else {
        cout<<"Too cold for outdoor activities.";
    }
    return 0;
}