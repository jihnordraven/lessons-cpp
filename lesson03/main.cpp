#include <iostream>

int main() {

    int num1, num2;

    std::cout << "Введите значение: ";
    std::cin >> num1;
    std::cout << "Введите значение: ";
    std::cin >> num2;

    int sum = num1 + num2;

    if (sum > 10) {
        std::cout << "More than 10.\nSummary: " << sum << std::endl;
    } else {
        std::cout << "Less than 10.\nSummary: " << sum << std::endl;
    }

    return 0;
}