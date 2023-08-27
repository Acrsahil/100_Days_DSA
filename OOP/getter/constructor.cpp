#include <iostream>
using namespace std;


class Student{
    private:
    int marks;
    int id;

    public:
    Student(){
        cout << "Constructor Called" << endl;
    }

    Student(int marks){ // making default constructor
        cout<< "this: "<<this <<endl;
        this -> marks = marks;
    

    }
};
int main()
{
    // Statically called
    Student s1(10);

    // Dynamically called
    Student *s = new Student(20);

    Student(10); // paramatrize consturctor




    return 0;
}