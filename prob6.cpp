//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
}

int main() {
    string input;
    cout << "Enter string: ";
    getline(cin, input);

    int counts[26] = {0};

    count(input.c_str(), counts);

    cout << "Output:" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0)
            cout << char('a' + i) << ": " << counts[i] << endl;
    }

    return 0;
}