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
        cout << "Code is fine" << endl;
    }
};

class Dog: public Animal{ // one step inheritance 
    
};

class BullDog: public Dog{ // two step inheritance

};



int main()
{
    BullDog c;
    c.speak();
    return 0;

}