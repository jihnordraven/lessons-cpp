#include <iostream>
#include <string>

using namespace std;

class Car;

class Person
{
private:
    int age;
    string name;

public:
    Person(string name)
    {
        this->name = name;
    }

    friend void info_car(Car &car, Person &person);
};

class Car
{
private:
    string name;

public:
    Car(string name)
    {
        this->name = name;
    }

    friend void info_car(Car &car, Person &person);
};

void info_car(Car &car, Person &person)
{
    cout << "Person with name: " << person.name << " has car " << car.name << endl;
}

int main()
{
    Car bmw("BMW");
    Person jhon("Jhon");

    info_car(bmw, jhon);

    return 0;
}