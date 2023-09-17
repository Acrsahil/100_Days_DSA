#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int height;

public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

class Human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
}