#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
};

void traversal(Node *head){
    Node * p = head;
    // this is normal approach
    // while(p-> next != head){
    //     cout << "Element: "<< p -> data<< endl;
    //     p = p-> next;
    // }
    // cout<<"Element: " << p -> data << endl;

    // this is standard approach
    do{
        cout << "Element: " << p ->data << endl;
        p = p -> next;
    }while(p != head);
}

Node * insertatfirst(Node *head,int data){
    Node *ptr = new Node();
    ptr -> data = data;

    Node *p = head -> next;
    while(p->next != head){
        p = p->next;
    }
    p -> next = ptr;
    ptr -> next = head;
    return ptr;
}

int main()
{
    Node * head = new Node();
    Node * second = new Node();
    Node * third = new Node();
    Node * fourth = new Node();


    head -> data = 4;
    head -> next = second;

    second -> data = 3;
    second -> next = third;

    third -> data = 6;
    third -> next = fourth;

    fourth -> data = 1;
    fourth -> next = head;
    
    cout << "Before " << endl;
    traversal(head);
    head = insertatfirst(head,23);
    cout << "After " << endl;
    traversal(head);
    return 0;
}