#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("sahil");
    s.push("Nirdesh");
    s.push("Sugam");
    cout<<"size of stack before -> "<<s.size()<<endl;

    cout<<"Top Element -> "<<s.top()<<endl;

    s.pop(); // it will remove the last element of the stack
    cout<<"Top Element -> "<<s.top()<<endl;

    cout<<"size of stack after -> "<<s.size()<<endl;

    cout<<"Empty or Not "<<s.empty()<<endl;


    
    return 0;
}