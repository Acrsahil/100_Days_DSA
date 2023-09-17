#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    void setWeight(int w)
    {
        this->weight = w;
    }

    int getAge()
    {
        return this->age;
    }
    int getWeight()
    {
        return this->weight;
    }
    
};

class Male : public Human // inheritate from class Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    Male m1;
    cout << m1.height << endl;







    /*
    Male object1;
    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.color << endl;

    object1.setWeight(5);
    object1.sleep();

    cout<< object1.weight << endl;

    cout << object1.getWeight() << endl;
*/
    return 0;
}