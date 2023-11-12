#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor in linklist
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
    void insertAthead(Node *head ,int d){
        // create new node
        Node *temp = new Node(d);
        temp -> next = head;
        head  = temp;
    }
    void print(Node* &head){
        Node *temp = head;

        while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
            
        }
        cout << endl;
    }
int main()
{
    //creating new node
    Node *node1 = new Node(10);
    // node1->data = 15;

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    print(head);
    insertAthead(head,12);
    print(head);
    insertAthead(head,10);
    return 0;
}
