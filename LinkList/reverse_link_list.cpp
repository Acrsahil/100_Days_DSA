#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void LinkListTraversal(Node *node)
{
    while (node != NULL)
    {
        cout<< node->data << " ";
        node = node->next;
    }
    cout << endl;
}
Node * reverselinklist(Node * head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node * chotta = reverselinklist(head-> next);
    head->next->next = head;
    head-> next = NULL;
    return chotta;
}
Node * reverseittlist(Node * head){

    Node * prev =NULL;
    Node * curr = head;
    Node * forward = new Node();

    while(curr != NULL){
        forward = curr->next;
        curr-> next = prev;

        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}
int main()
{
    // Allocate memory in link list in heap
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

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
    fourth->next = NULL;

    cout << "Before" << endl;
    LinkListTraversal(head);
    head = reverselinklist(head);
    cout <<  "After"  << endl;
    LinkListTraversal(head);
    
}