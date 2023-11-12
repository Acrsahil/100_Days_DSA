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
        cout << "Element: "<< node->data << endl;
        node = node->next;
    }
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

    LinkListTraversal(head);
    
}