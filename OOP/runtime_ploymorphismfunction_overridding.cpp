#include <iostream>
using namespace std;
class Animal{
   public:
   void Speak() {
    cout<< "Speaking" << endl;
   }
};
class Dog : public Animal{
    public:
    void Speak(){ // function overriding (runtime ploymorphism)
        cout<< "Barking" << endl;
    }
    
};
int main()
{
    Dog d1;
    d1.Speak();

    Animal a1;
    a1.Speak();
    
    return 0;
}