#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generate_password(int length) {
    std::string chars = "qwertyuiop[asdfghjkl;'zxcvbnm,./1234567890QWEADWSRTYUIOP{HFGJKL";
    std::string password;

      srand(static_cast<unsigned int>(time(nullptr)));

    for(int i = 0; i < length; i++) {
         int randomIndex = rand() % chars.length();
         password += chars[randomIndex];
    }

    return password;
};

int main() {
    int length;

    std::cout << "Type length for password:";
    std::cin >> length;

    std::string password = generate_password(length);

    std::cout << "Generated password: " << password << std::endl;

    return 0;
}