//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
using namespace std;

void search(string& s, char& key) {
    bool found = false;
    for (char c : s) {
        if (c == key) {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
}

int main() {
    char key;
    string s;

    cout << "Enter character to search: ";
    cin >> key;
    cin.ignore(); // to ignore newline after character input

    cout << "Enter string: ";
    getline(cin, s);

    search(s, key);

    return 0;
}