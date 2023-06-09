#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    char *p = &ch;
    cout<<"address "<<*p<<endl;

    int num = 50;
    int *ptr = &num;
    cout<<"address "<<ptr<<endl;

    cout<<"size of the integer is "<<sizeof(num)<<endl; // size of int 
    cout<<"size of the pointer is "<<sizeof(ptr)<<endl; // pointer always store 8 byte



    int i = 5;
    int *poi = 0;
    poi = &i;
    cout<<poi<<endl;


    double nu = 5;
    double *pu = &nu;


    cout<<"before " << pu <<endl;
    pu++;
    cout<<"after " << pu << endl;
    cout<<++*pu<<endl;
    return 0;
}