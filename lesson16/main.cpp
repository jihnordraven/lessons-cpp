#include <iostream>
#include <string>

using namespace std;

void division(float a, float b) {
    if (b == 0) throw 400; 
    cout << (a / b);
}

int main() {

    try {
        division(5.2f, 0.0f);
    } catch (int err) {
        if (err == 400) {
            cout << "Unable to divide for 0" << endl;
        }
    }

    return 0;
}