//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a) {
    int counter = 0;
    for (char c : s) {
        if (c == a)
            counter++;
    }
    return counter;
}

int main() {
    char a;
    string s;

    cout << "Enter character to count: ";
    cin >> a;
    cin.ignore();

    cout << "Enter string: ";
    getline(cin, s);

    int result = count(s, a);
    cout << "Output: " << result << endl;

    return 0;
}