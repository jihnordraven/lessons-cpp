#include <iostream>
#include <string>

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    // string message = "This is my string";

    // cout << message << endl;

    // char word[] = {'H', 'i', '!'};

    // for (int i = 0; i < 3; i++) {
    //     cout << word[i];
    // }

    // std::string words = "STD string, Привет!";

    // std::cout << words << std::endl;

    // string words = "Hello World! Привет мир!";

    // cout << "\n" << words;

    string user_input;

    cout << "Type some text: ";

    cin >> user_input;

    cout << "User text: " << user_input << endl;

    return 0;
}