//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}