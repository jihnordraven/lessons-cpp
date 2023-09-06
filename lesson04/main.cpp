#include <iostream>

using namespace std;

int main() {
    
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    char operation;

    cout << "Enter operation: ";
    cin >> operation;

    int result;

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                break;
            } else {
                cout << "Unable to divide the number to zero" << std::endl;
                return 1;
            }
        case '%':
            if (num2 != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                break;
            } else {
                cout << "Unable to divide the numbers to zero" << std::endl;
                return 1;
            }
        default:
            cout << "Operation not found";
            return 1;
    }

    cout << "Result: " << result << endl;

    srand(time(NULL));
    
    int random_number = 1 + rand();

    cout << random_number << endl;

    return 0;
}