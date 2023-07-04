#include <iostream>
using namespace std;
void reachHOme(int src, int dest){
    cout << "source " << src << " destination " << dest <<endl;
    if(src == dest){
        cout<< "pachuch gaya "<<endl;
        return;
    }
    src++;
    // recurssive call
    reachHOme(src,dest);
}

int main()
{
    int dest = 10;
    int src = 1;
    cout<< endl;

    reachHOme(src, dest);

    return 0;
}