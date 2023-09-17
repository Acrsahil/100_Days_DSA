#include <iostream>
using namespace std;

class Employee{
    private:
    long long int employee_salary;
    int employee_id;

    public:
    int employee_rank;
    string employee_name;

    void personalinfo(int id,long long salary){
        employee_salary = salary;
        employee_id = id;
    }

};
int main()
{
    Employee *id = new Employee;
    id->personalinfo(20,3000000);

    (*id).employee_name = "hari";

    cout<<id -> employee_name<<endl; 
    return 0;
}