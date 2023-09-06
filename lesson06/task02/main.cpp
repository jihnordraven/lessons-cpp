#include <iostream>
#include <string>

using namespace std;

int main() {

    float numbers[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> numbers[i];
    }

    float summ = 0;
    float min = numbers[0];
    for (int i = 0; i < 5; i++) {
        summ += numbers[i];
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }

    cout << "Summ: " << summ << endl;
    cout << "Min: " << min << endl;

    for(int i = 0; i< 5; i++) {
        cout << "Element: " << numbers[i] << endl;
    }

    return 0;
}