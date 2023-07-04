#include <iostream>
using namespace std;

int fab(int n){
    if(n == 0){
        return 0;
    }
    if( n == 1){
        return 1;
    }else{
        return fab(n-2) + fab(n-1);
    }
}
int main()
{
    int n = 4;

   cout<<fab(n)<<endl;
    return 0;
}