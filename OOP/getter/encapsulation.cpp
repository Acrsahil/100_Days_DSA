#include <iostream>
using namespace std;

class encapsulation
{
private:
    string name;
    int age;
    int height;

    public:
    // void setAge(){
    //     age = 15;
    // }
    int getAge(){
        return age;
    }
};
int main()
{
    encapsulation first;
    // first.setAge();
    cout<<"Sab sahi chalra hai " << first.getAge() << endl;

    return 0;
}