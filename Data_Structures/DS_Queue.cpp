#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("sahil");
    q.push("Nirdesh");
    q.push("Sugam");

    cout<<"Size before pop -> "<<q.size()<<endl; // size of queue before pop()

    cout<<"Frist Element -> "<<q.front()<<endl;
    q.pop(); // it will romove the first element of the queue
    cout<<"Frist Element -> "<<q.front()<<endl;

    cout<<"Size after pop -> "<<q.size()<<endl; // size of queue after pop() 
    
    return 0;
}