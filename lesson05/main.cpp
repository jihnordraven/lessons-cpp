#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>

using namespace std;

enum Status {
    OK,
    NO
};

int main() {

    srand(time(NULL));

    bool stop = false;
    int user_input = 0;

    int random_number = 1 + rand() % 15;

    int attempts = 0;

    if (isdigit(user_input)) {
            do {
        if (attempts >= 3) {
            string status;
            cout << "You lose three atempts. type 'OK' to contiune or 'NO' to leave: ";
            cin >> status;

            transform(status.begin(), status.end(), status.begin(), ::tolower);

            if (status == "ok") {
                attempts = 0;
                random_number = 1 + rand() % 15;
            } else if (status == "no") {
                cout << "Goodbye :)";
                return 0;
            } else {
                cout << "Invalid command. Please type again: ";
                cin >> status;
                continue;
            }
        }

        cout << "Enter number: ";
        cin >> user_input;

        string choose;

            if (user_input != random_number) {
            cout << "You didn't guess, the right number was: " << random_number << "\n" << endl;
            attempts += 1;
            random_number = 1 + rand() % 15;
        } else {
            cout << "Congratulations! You guess right!\n" << "To contiune type '+'\n" << "To leave type '-'"<< endl;
            cin >> choose;
            if (choose == "+") {
                attempts = 0;
                random_number = 1 + rand() % 15;
            } else if (choose == "-") {
                cout << "Goodbye!";
                return 0;
            } else {
                cout << "Invalid operation, please try again: ";
                cin >> choose;
            }
        }
    } while (!stop);
    } else {
        cout << "Type must be integer";
    }

    return 0;
}