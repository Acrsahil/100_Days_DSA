#include <iostream>
using namespace std;
class A
{
public:
    void sayHello() // no arguments -> (different arguments)!
    {
        // cout << "say Hello" << endl;
    }
    int sayHello(char s) // different arguments!
    {
        cout << "say Hello" << endl;
        return s;
    }
    void sayHello(string s) // different arguments!
    {
        cout << "say Hello" << endl;
    }
    void sayHello(string s,int n) // default arguments -> different arguments!
    {
        cout << "say Helloooo" << endl;
        cout<< n << endl;
    }
};
// moral of the story : we have to change in signature of the function to acheive function overloading!
int main()
{
    A obj;
    obj.sayHello();


    obj.sayHello("sahil");

    return 0;
}