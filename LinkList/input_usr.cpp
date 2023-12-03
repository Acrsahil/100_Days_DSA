#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
};
void deleatend(Node *&head,Node *&tail){
    Node * p = head;
    while(p -> next != tail){
        p  = p->next;
    }
    p -> next = NULL;
    tail = p;
}
void input(Node*& head,int n){
    Node *p = head;
        cin >> head ->data;
        n--;
    while(n--){
        Node *temp = new Node();
        cin >> temp ->data;
        temp -> next = p->next;
        p -> next = temp;
        p = temp;
    }
}
void tailpointer(Node* &head) {
    Node* ptr = head;
    Node* p = head->next;

    // Traverse until the last node
    while (p != NULL) {
        cout << ptr->data << endl;
        ptr = ptr -> next;
        p = p->next;
    }
    cout<< ptr ->data << endl;
    Node *tail = ptr;
    deleatend(head,tail);
    

    // Print the data of the last node (outside the loop)
}



void traversal(Node *head){
    Node * p = head;
    while(p!=NULL){
        cout << p->data << endl;
        p = p->next;
    }
}
int main()
{
    int n;
    cin >> n;
    Node * head = new Node();
    head ->next = NULL;
    input(head,n);
    cout << "Before" << endl;
    tailpointer(head);
    cout << "After" << endl;
    traversal(head);


    
    return 0;
}