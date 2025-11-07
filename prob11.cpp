//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string changeCase(const string& word) {
    int lowerCount = 0, upperCount = 0;

    for (char ch : word) {
        if (islower(ch))
            lowerCount++;
        else if (isupper(ch))
            upperCount++;
    }

    string result = word;

    if (lowerCount >= upperCount) {
        for (char &ch : result)
            ch = tolower(ch);
    } else {
        for (char &ch : result)
            ch = toupper(ch);
    }

    return result;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string output = changeCase(word);
    cout << "Output: " << output << endl;

    return 0;
}