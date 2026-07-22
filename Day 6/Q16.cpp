// Problem: Read a number and determine whether it is a Trendy Number.
// Approach: Check if it is a 3-digit number; extract the middle digit ((n / 10) % 10). If the middle digit is divisible by 3, print "Trendy Number"; otherwise print "Not a Trendy Number". If not 3-digit, print "Invalid Number".
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>     
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>=100&&n<=999){ 
        int MD=(n/10)%10; 
        if(MD%3==0){
            cout<<"Trendy Number"<<endl;
        } else {
            cout<<"Not a Trendy Number"<<endl;
        }
    }else{
        cout<<"Invalid Number"<<endl; 
    }
    return 0;
}