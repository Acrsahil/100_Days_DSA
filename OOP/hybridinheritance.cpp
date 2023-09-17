#include <iostream>
using namespace std;

class A{
    public:
    void funA(){
        cout<<" inside Class A" << endl;
    }
};

class D{
    public:
    void funD(){
        cout << "inside Class D" << endl;
    }
};

class B: public A{
    public:
    void funB(){
        cout<< "inside Class B"<< endl;
    }
};

class C :public A, public D{
    public:
    void func(){
        cout << "inside Class C"<< endl;
    }
};
int main()
{
    C objC;
    objC.func();
    objC.funA();
    objC.funD();
    cout<< endl;

    B objbB;
    objbB.funA();
    objbB.funB();
    cout<< endl;

    D objD;
    objD.funD();
    cout<< endl;

    
    A objA;
    objA.funA();
    cout<< endl;
    return 0;
}