#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    const string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
    string password = "";
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % chars.length();
        password += chars[randomIndex];
    }
    
    return password;
}

int main() {
    int length;
    
    cout << "Введите длину пароля: ";
    cin >> length;
    
    if (length <= 0) {
        cout << "Длина пароля должна быть положительным числом." << endl;
        return 1;
    }
    
    string password = generatePassword(length);
    
    cout << "Сгенерированный пароль: " << password << endl;
    
    return 0;
}
