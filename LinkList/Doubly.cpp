#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node * next;
};
void inverse(Node *end){
    Node *p = end;
    cout << "After " << endl;
    while(end!= NULL){
        cout << "Element: "<< end ->data << endl;
        end = end -> prev;
    }
    
}

void traverse(Node *head) {
    Node* q = head;
    Node * p = head -> next;
    while (p != NULL){
        cout << "Element: " << q->data << endl;
        q = q -> next;
        p = p -> next;
    }
    cout << "Element: " << q->data << endl;
    inverse(q);
}

Node * insertAtbegin(Node * head,int data){
    Node *p = new Node();
    p->data = data;
    p->next = head;
    head -> prev = p;
    head = p;
    return head;
}

int main()
{
    // Creating Node
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    // initilizing value in node
    head -> prev = NULL;
    head -> data = 15;
    head -> next = second;

    second -> prev = head;
    second -> data = 20;
    second -> next = third;

    third -> prev = second;
    third -> data = 25;
    third -> next = fourth;

    fourth -> prev = third;
    fourth -> data = 30;
    fourth -> next = NULL;

    // traversing doubly link list
    cout << "Before " << endl;
    traverse(head);
    head = insertAtbegin(head,1);
    cout << "After" << endl;
    traverse(head);


    return 0;
}