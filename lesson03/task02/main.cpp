#include <iostream>

int main() {

    int num1, num2;

    std::cout << "Input value: ";
    std::cin >> num1;

    std::cout << "Input value: ";
    std::cin >> num2;

    if (num1 == 1 || num2 == 1) {
        std::cout << "One of the numbers is equal to 1\n";
    } else {
        std::cout << "Any of numbers is not valid to 1\n";
    }

    if (num1 == 2 && num2 == 2) {
        std:: cout << "Both numbers are valid to 2\n";
    }


    return 0;
}