#include <iostream>

int main() {

    int num1, num2;

    std::string operation;

    std::cout << "Введите первое значение: ";
    std::cin >> num1;

    std::cout << "Введите второе значение: ";
    std::cin >> num2;

    std::cout << "Введите операцию. Например: '+', '-', '*', '/', '%': " << std::endl;
    std::cin >> operation;

    long result;

    switch(operation[0]) {
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
                std::cout << "Ошибка: Деление на 0" << std::endl;
                return 1;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                break;
            } else {
                std::cout << "Ошибка: Деление на 0" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Ошибка: Неизвестная операция" << std::endl;
            return 1;
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}