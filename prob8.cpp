//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <cctype>
using namespace std;

// Convert character to lowercase
char tolowerChar(const char ch) {
    return tolower(ch);
}

// Count vowels and consonants
void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    while (*str != '\0') {
        char ch = tolowerChar(*str);
        if (ch >= 'a' && ch <= 'z') { // only letters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowelCount++;
            else
                consonantCount++;
        }
        str++;
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowels, consonants;
    countChar(str, vowels, consonants);

    cout << "vowels: " << vowels << endl;
    cout << "consonants: " << consonants << endl;

    return 0;
}