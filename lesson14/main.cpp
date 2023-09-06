// data structures

#include <iostream>
#include <string>

using namespace std;

struct Point {
    int x, y;  
};

struct Tree {
    string name;
    int age;
    bool is_alive;
    float height;
    Point place;

    void get_info() {
        cout << "Name: " << name << ". Age: " << age << endl;
    }
};

int main() {

    Tree oak;
    oak.name = "Oak";
    oak.age = 47;
    oak.is_alive = true;
    oak.height = 25.5; 
    oak.place.x = 100;
    oak.place.y = 10;

    Tree birch;
    birch.name = "Birch";
    birch.age = 14;
    birch.is_alive = true;
    birch.height = 7;
    birch.place.x = 50;
    birch.place.y = 5;

    oak.get_info();
    birch.get_info();

    return 0;
}