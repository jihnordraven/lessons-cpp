#include <iostream>
#include <string>

using namespace std;

void print(string word) {
    cout << "Number: " << word << endl;
}

enum Operation {
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION
};

void calculate(int num1, int num2, Operation operation) {
    int result;
    switch (operation) {
        case ADDITION:
            result = num1 + num2;
            break;
        case SUBTRACTION:
            result = num1 - num2;
            break;
        case MULTIPLICATION:
            result = num1 * num2;
            break;
        case DIVISION:
            if (num2 != 0) {
                result = num1 / num2;
                break;
            } else {
                cout << "Unable division to 0";
                break;
            };
        default:
            cout << "Operation not found";
    }
    cout << result << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    // for (int i = 0; i < 10; i++) {
    //     print(i);
    // }

    int num1, num2;
    string operation_str;

    Operation operation;

    cout << "Enter number 1: ";
    cin >> num1;
    
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation_str;

    if (operation_str == "+") {
        operation = ADDITION;
    } else if (operation_str == "-") {
        operation = SUBTRACTION;
    } else if (operation_str == "*") {
        operation = MULTIPLICATION;
    } else if (operation_str == "/") {
        operation = DIVISION;
    } else {
        cout << "Operation not found. \n" << "Type operation again: ";
        cin >> operation_str;
    }
    string operation_string;

    calculate(num1, num2, operation);

    return 0;
}