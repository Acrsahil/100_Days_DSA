#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = 0;
    int height = 0;

    for(int i = 1; n > 0; i++ ){
        sum = i + sum;
        if(n - sum >= 0) height ++;
        n -= sum;
    }
    cout<<height<<endl;
    return 0;
}