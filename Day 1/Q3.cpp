// Problem: Read a student's name, age, CGPA, and grade, then display them in the required format with CGPA rounded to 2 decimal places.
// Approach: Take the inputs, format the CGPA to two decimal places, and print all details.
// Time: O(1), Space: O(1)

#include<bits/stdc++.h>
using namespace std;    
int main(){
    string name;
    int age;
    double cgpa;
    char grade;
    cin >> name >> age >> cgpa >> grade;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << fixed << setprecision(2) << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}