#include<iostream>
using namespace std;

int main(){
int a = 3; // This a is global variable we can access anywhere in int main() body
    cout<< a <<endl;

    if(true){
        int a = 5; // This a is a local variable only use in this block
    cout<<a <<endl;
    }
    
    
    cout<<a<<endl;

    int b = 1;
    cout<<a <<endl;

    //int b = 3; // We cannot decleared same variable again
    cout<<a <<endl;
    if(true){ // BUt We can make same variable in another block
        int b = 5;
        cout<<"This is nested b "<<b<<endl;

    }

    



    return 0;
}