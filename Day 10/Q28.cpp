// Problem: Read N participant scores and find the sum of the top K highest scores.
// Approach: Sort the scores in descending order (or use a max-heap), then sum the first K elements.
// Time: O(N log N), Space: O(1) (excluding sorting)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin>>n >> k;
    vector<int>scores(n);
    for (int i=0;i<n;i++) {
        cin>>scores[i];
    }
    sort(scores.begin(), scores.end(), greater<int>());
    long long sum=0;
    for (int i=0;i<k;i++) {
        sum+=scores[i];
    }
    cout <<sum;
    return 0;
}