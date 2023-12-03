#include <bits/stdc++.h>
using namespace std;


void say_hello(int n){
    if(n==0){
        cout << "here" << endl;
        return;
    }
    say_hello(n-1);               
    cout << "hello " << n << endl;
}
int main()
{
    say_hello(10);
    return 0;
}