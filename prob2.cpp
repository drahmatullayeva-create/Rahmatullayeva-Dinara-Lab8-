//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
using namespace std;

void reverseString(string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    reverseString(s);
    cout << "Reversed: " << s << endl;

    return 0;
}