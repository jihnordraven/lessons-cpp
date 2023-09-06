#include <iostream>
#include <string>

using namespace std;

template <typename T>

void print_arr(T *arr, int len)
{
    for (int i = 0; i < len; i++)
        cout << *(arr + i) << " ";

    cout << endl;
}
int main()

{

    int arr1[] = {5, 6, 3, 2, 0, 0, -4};
    print_arr<int>(arr1, 6);

    float arr2[] = {5.34f, 6.01f, 3.23f};
    print_arr<float>(arr2, 3);

    return 0;
}