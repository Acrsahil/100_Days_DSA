#include <iostream>
using namespace std;


inline int intmax(int &a,int &b){
    return a>b ? a : b;
}
int main()
{
    int a = 5;
    int b = 10;
    cout<<intmax(a,b)<<endl;
    
    return 0;
}