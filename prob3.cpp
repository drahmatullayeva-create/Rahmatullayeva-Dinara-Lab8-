//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main() {
    string s, t;

    cout << "Enter first string (s): ";
    cin >> s;

    cout << "Enter second string (t): ";
    cin >> t;

    if (isAnagram(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}