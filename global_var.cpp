#include <iostream>
using namespace std;


int i = 100;  // declares before the main function 
int main()
{
cout<<i<<endl; // before initilization -> print 100 
    int i = 15;
    i++;
    cout<<i<<endl;  // after initilization -> print 15
    return 0;
}