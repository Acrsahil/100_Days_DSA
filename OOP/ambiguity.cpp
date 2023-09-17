#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "inside Class A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "inside Class B" << endl;
    }
};

class C : public A, public B
{
};
int main()
{
    C obj;
    //  obj.func(); this will form ambiguity issue
    //  obj.func();
    obj.A::func(); // method : to resolve this ambiguity issue
    obj.A::func();


    return 0;
}