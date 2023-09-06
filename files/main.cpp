#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    // OPEN FILE STREAM
    // ofstream file("test.txt", ios_base::out);
    // if (file.is_open()) {
    //     file << "Hello world This text is from C++";
    //     file.close();
    // }

    // IN FILE STREAM
    ifstream file("test.txt");
    if (file.is_open()) {
        // string temp;
        // file >> temp;
        char temp[5];
        file.getline(temp, 5);
        cout << temp << endl;
        file.close();
    }

    return 0;
}