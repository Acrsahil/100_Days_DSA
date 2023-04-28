#include<iostream>
using namespace std;


void dummy(int a){
    a++;
    cout<<a<<endl;
}
int main()

{
   int a= 5;
   dummy(a);
   cout<<a<<endl;

 return 0;
}