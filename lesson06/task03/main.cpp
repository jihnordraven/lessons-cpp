#include <iostream>
#include <string>

using namespace std;

int main() {

    int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    cout << matrix[2][0] << endl;

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << endl;
        }
    }

    return 0;
}