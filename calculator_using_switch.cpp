#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char opt;

    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"enter the operator: ";
    cin>>opt;

    switch (opt)
    {
    case '+':
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;
    
    case '-':
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;

    case '*':
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;

    case '/':
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
        break;

    case '%':
    cout<<a<<" % "<<b<<" = "<<a%b<<endl;
        break;
    
    default:
    cout<<"Invalid Input Operator"<<endl;
        break;
    }

    return 0;
}