#include <iostream>

using namespace std;

int main() {

    int num = 10; // 4 byte

    int *nums = new int[3];

    nums[0] = 45;

    cout << nums[0] << endl;

    delete[] nums;

    cout << "El: " << nums[0] << endl;

    return 0;
}