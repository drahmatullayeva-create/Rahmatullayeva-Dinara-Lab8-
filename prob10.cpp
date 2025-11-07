//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(const string& s) {
    unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int value = roman[s[i]];
        if (i + 1 < n && value < roman[s[i + 1]]) {
            total -= value; // subtract if smaller value comes before larger value
        } else {
            total += value;
        }
    }

    return total;
}

int main() {
    string s;
    cout << "Enter Roman numeral: ";
    cin >> s;

    int result = romanToInt(s);
    cout << "Output: " << result << endl;

    return 0;
}