// Problem: Read a character and determine whether it is a vowel, consonant, or not an English alphabet.
// Approach: Check if the character is an alphabet; if yes, test for vowels (a, e, i, o, u, case-insensitive), otherwise classify it as a consonant or not an alphabet.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        char lowerCh = tolower(ch);
        if(lowerCh=='a'||lowerCh=='e'||lowerCh=='i'||lowerCh=='o'||lowerCh=='u'){
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    } else {
        cout << "Not an English alphabet" << endl;
    }
    return 0;
}