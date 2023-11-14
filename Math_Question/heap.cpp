#include <bits/stdc++.h>
using namespace std;

class root{
    public:
    int data;
    root *next;
};
void traverse(root *head){
    while(head != NULL){
        cout << "Element: " << head->data << endl;
        head = head -> next;
    }
}
root *insertinlast(root *head){
    root *p = head;
    root *q = new root();
    q -> data = 100;
    while(p->next != NULL){
        p = p->next;
    }
    q -> next = NULL;
    p-> next = q;
return head;
}
int main()
{
    root *head = new root();
    root *second = new root();
    root *third = new root();
    root *fourth = new root();

    head->data = 15;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 1;
    third->next = fourth;
    
    fourth->data = 14;
    fourth->next = NULL;

    cout << "Before :" << endl;
    traverse(head);
    head = insertinlast(head);
    cout << "After :" << endl;
    traverse(head);
}