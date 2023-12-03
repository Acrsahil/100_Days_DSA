#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node *prev;
    int data;
    Node* next;


    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insetAthead(Node* &head ,Node* &tail, int d){
     //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}
void print(Node* &head){
    Node * p = head;
    while(p != NULL){
        cout << p->data << " ";
        p = p-> next;
    }
    cout << endl;
}
void insetAttail(Node *&head,Node* &tail,int d){

    Node* temp = new Node(d);
    if(head == NULL) {
        head = temp;
        tail = temp;
    }
    else{
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
void reverseList(Node *head,Node*&tail,int d){
    Node * p = tail;
    while(p != NULL){
        cout << p->data << " ";
        p  = p->prev;
    }
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    insetAthead(head,tail,5);
    insetAthead(head,tail,6);
    insetAthead(head,tail,8);
    insetAthead(head,tail,9);
    print(head);

    insetAttail(head,tail,4);
    insetAttail(head,tail,3);
    insetAttail(head,tail,5);
    insetAttail(head,tail,2);
    insetAttail(head,tail,9);
    print(head);

    reverseList(head,tail,5);
    return 0;
}