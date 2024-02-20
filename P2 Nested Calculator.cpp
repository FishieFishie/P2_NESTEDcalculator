// P2 Nested Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    //Establish the integers: number 1 and number 2
    int num1, num2;
    char op;
    //Establish user input
    cout << "Enter the operator for this simple equation; choices: +, -, *, /: ";
    cin >> op;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    //This is what it looks like if the program is nested with if's and else's
    if (op == '+') {
        cout << num1 << " " << op << " " << num2 << " " << "=" << " " << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << num1 << " " << op << " " << num2 << " " << "=" << " " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << num1 << " " << op << " " << num2 << " " << "=" << " " << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero is undefined." << endl;
        }
        else {
            cout << num1 << " " << op << " " << num2 << " " << "=" << " " << num1 / num2 << endl;
        }
    }
    else {
        cout << "Error: Unsupported Operator!" << endl;
    }
    //This is what it looks like IF we don't use the switch and case alternative

    return 0;
}
