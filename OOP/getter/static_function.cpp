#include <iostream>
using namespace std;


class hero{
    public:
    static int health;
    int age = 50;


    static int random(){
        // static function are only accessed to static members
        return health;
    }
};
int hero::health = 5;

int main()
{
    cout<<hero::random() <<endl;
    return 0;
}