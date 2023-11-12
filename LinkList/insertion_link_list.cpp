#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void LinkListTraversal(Node *node)
{
    while (node != NULL)
    {
        cout << "Element: "<< node->data << endl;
        node = node->next;
    }
}
Node * insertAtbegin(Node * head,int data){
    Node *ptr = new Node();
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}
Node * insertAtend(Node * head,int data){
    Node *ptr = new Node();
    ptr->data = data;
    Node *p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr-> next = NULL;
    return head;
}
Node * insertAfterNode(Node * pnode,Node *head,int data){
    Node *ptr = new Node();
    ptr->data = data;

    ptr-> next = pnode -> next;
    pnode->next = ptr;
    return head;
}
Node * insertAtindex (Node* head,int data,int index){
    Node *ptr;
    Node *p = head;
    int i = 0;
    while(i != index-1){
        p = p-> next;
        i++;
    }
    ptr -> data = data;
    ptr->next =  p->next;
    p-> next = ptr;
    return head;
}
Node * deletefirsrtNode(Node *head){
    Node *ptr= head;
    head = head -> next;
    delete ptr;
    return head;
}
Node * deletelastNode(Node *head){
    Node *ptr= head;
    Node *p= head->next;
    while(p->next != NULL){
        p = p -> next;
        ptr = ptr -> next;
    }
    ptr -> next = NULL;
    delete p;
    return head;
}
Node * deleteNodefromdata(Node *head,int data){
    Node *ptr = head;
    Node *p = head-> next;
    while(p->data != data){
        ptr = ptr -> next;
        p = p -> next;
    }
    ptr -> next = p -> next;
    delete p;
    return head;
}
Node * deleteNodefromindex(Node *head,int ind){
    Node *p = head;
    int i = 0;
    while(i != ind-1){
        p = p -> next;
        i++;
    }
    Node * q = p->next;
    p -> next = q -> next;
    delete q;
    return head;
}
int main()
{
        // Allocate memory in link list in heap
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();

    // Link first and second node
    head->data = 7;
    head->next = second;

    // Link second and third node
    second->data = 11;
    second->next = third;

    // Link third and fourth node
    third->data = 14;
    third->next = fourth;

    // Link third to Null (end the link list)
    fourth->data = 25;
    fourth->next = fifth;


    fifth->data = 30;
    fifth->next = NULL;

    // cout << "Link List Before Insertion"<< endl;
    // LinkListTraversal(head);
    // head = insertAfterNode(second,head,92);
    // cout << "\nLink List After Insertion"<< endl;
    // LinkListTraversal(head);

    cout << "Link List Before Delettion"<< endl;
    LinkListTraversal(head);
    head = deleteNodefromindex(head,3);
    cout << "\nLink List After Deletion"<< endl;
    LinkListTraversal(head);
    return 0;
}