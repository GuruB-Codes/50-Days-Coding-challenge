// Problem: Read the battery percentage (N) and calculate the sum of all its factors.
// Approach: Find all divisors of N (including 1 and N), sum them, and print the result.
// Time: O(√N), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    cout<<"SUM :"<<sum<<endl;
    return 0;
}