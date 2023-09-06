#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum Options {
    OPEN,
    CLOSE,
    WAIT,
    DEL
};

struct File {
    float weight;
    string name;
    Options options; 
};

int main() {

    File file;
    file.weight = 1.5f;
    file.name = "test.txt";
    file.options = Options::OPEN;

    // cout << file.options;

    if (file.options == Options::CLOSE) {
        cout << "File is close" << endl;
    } else if (file.options == Options::DEL) {
        cout << "File was deleted" << endl;
    } else if (file.options == Options::WAIT) {
        cout << "Waiting for opening file";
    } else if (file.options == Options::OPEN) {
        cout << file.name << endl;
    }

    return 0;
}