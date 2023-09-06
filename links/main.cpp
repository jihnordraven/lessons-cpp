#include <iostream>
#include <string>

using namespace std;

void minimal(int* arr, int length) {
    // first in array
    int min = *arr;
    for (int i = 0; i < length; i++) {
        if (min > *(arr + i)) {
            min = *(arr + i);
        }
    }
    cout << "Minimal: " << min << endl;
}

int main() {

    // links
    // int num = 10; // 4 byte
    // int &a = num; // 4 byte

    // cout << a << endl;;

    // cout << &a << endl;
    // cout << &num << endl;

    // // pointers
    // int val = 12;
    // int* ptrval = &val;

    // *ptrval = 20;

    // ptrval = nullptr;

    // cout << &val <<  "-" << val<< endl;
    // cout << &ptrval << "-" << *ptrval << endl;

    int arr[] = {5, 7, 3, -2, 5};

    minimal(arr, 5);

    return 0;
}