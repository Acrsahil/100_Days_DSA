#include <iostream>
using namespace std;
class B{
    public:
    int a;

    
    void operator+(B &obj){
       int val0 = this -> a;
       int val2 = obj.a;
       cout << "output: " << val2-val0<< endl;
    }
    void operator/(B &obj){
       int val0 = this -> a;
       int val2 = obj.a;
       cout << "output: " << val2*val0<< endl;
    }
    
    void operator() (){
        cout << "main Bracket hu " << this ->a << endl;
    }
};
int main()
{
    B obj0;
    B obj2;

    obj0.a = 2;
    obj2.a = 3;

    obj0/obj2;
    obj0+obj2;

    obj0();



    
    return 0;
}