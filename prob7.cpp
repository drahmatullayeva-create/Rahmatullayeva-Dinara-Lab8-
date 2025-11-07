//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
using namespace std;

int countAuthentic(const string& s) {
    bool seen[26] = {false}; // track letters A-Z
    int uniqueCount = 0;

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            if (!seen[c - 'A']) {
                seen[c - 'A'] = true;
                uniqueCount++;
            }
        }
    }
    return uniqueCount;
}

int main() {
    string s;
    cout << "Enter uppercase string: ";
    cin >> s;

    int result = countAuthentic(s);
    cout << "Output: " << result << endl;

    return 0;
}