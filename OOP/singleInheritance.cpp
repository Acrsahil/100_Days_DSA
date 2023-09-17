#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int height;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal{
    
};



int main()
{
    Dog g;
    g.speak();
    return 0;
}