#include <iostream>
#include <string>

using namespace std;

template <class T>
class Arrays
{
private:
    int len;
    T *arr;

public:
    Arrays(T *a, int len)
    {
        this->len = len;
        arr = new T[len];
        for (int i = 0; i < len; i++)
            *(arr + i) = *(a + i);
    }
    void get()
    {
        for (int i = 0; i < len; i++)
            cout << *(arr + i) << " ";

        cout << endl;
    }
    ~Arrays()
    {
        delete[] arr;
    }
};

int main()
{

    int arr1[] = {3, 6, 3};
    Arrays<int> obj1(arr1, 3);
    obj1.get();

    float arr2[] = {1, 5, 7, 9, 13};
    Arrays<float> obj2(arr2, 5);
    obj2.get();

    return 0;
}