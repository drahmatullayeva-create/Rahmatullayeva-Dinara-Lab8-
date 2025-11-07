//
// Created by Dinara on 07/11/2025.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    int n;

    cout << "Enter number of operations: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string op;
        getline(cin, op);

        if (op == "x++" || op == "++x")
            x++;
        else if (op == "x--" || op == "--x")
            x--;
    }

    cout << "Output: " << x << endl;

    return 0;
}
