#include <iostream>
#include <string>

using namespace std;

class Person;

class Dog
{
private:
    int health = 100;

public:
    friend Person;
};

class Person
{
public:
    void Damage(Dog &dog)
    {
        dog.health -= 20;
        cout << "Health of animal: " << dog.health;
    };
    void Heal(Dog &dog)
    {
        dog.health += 10;
        cout << "Health of animal: " << dog.health;
    }
    void Kill(Dog &dog)
    {
        dog.health = 0;
        cout << "Health of animal: " << dog.health;
    }
};

int main()
{

    Dog rex;
    Person jhon;
    jhon.Damage(rex);
    jhon.Heal(rex);
    jhon.Kill(rex);

    return 0;
}