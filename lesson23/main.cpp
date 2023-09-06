#include <iostream>
#include <string>

using namespace std;

class PC
{
protected:
    int diagonal;
    string os;

public:
    PC(int diagonal, string os)
    {
        this->diagonal = diagonal;
        this->os = os;
    }
};

class Laptop : public PC
{
private:
    float weight;

public:
    Laptop(int diagonal, string os, float weight) : PC(diagonal, os)
    {
        this->weight = weight;
        this->diagonal = diagonal;
        this->weight = weight;
    };
};

int main()
{

    return 0;
}