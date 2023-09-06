#include <iostream>
#include <string>

using namespace std;

int addition(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int num1, num2;

    cout << "Type number #1: ";
    cin >> num1;

    cout << "Type number #2: ";
    cin >> num2;

    int result = addition(num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}