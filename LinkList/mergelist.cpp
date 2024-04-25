#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void LinkListTraversal(Node *node) {
    Node *temp = node;
    while (temp != NULL) {
        cout << "Element: " << temp->data << endl;
        temp = temp->next;
    }
}


Node *insertAtHead(Node *head, int n) {
    Node *temp = new Node();
    temp->data = n;
    temp->next = head;
    head = temp;
    return head;
}

Node *merge(Node *h1, Node *h2) {
  Node * temp1 = h1;
  Node * temp2 = h2;

 Node *res = new Node(); // Dummy node
Node *ans = res;



  while(temp1 != NULL && temp2 != NULL){
    if(temp1->data <= temp2->data){
      ans->next = temp1;
      temp1 = temp1->next;
    }else{
      ans->next = temp2;
      temp2 = temp2->next;
    }
    ans = ans -> next;
  }

    if (temp1 != NULL) {
        ans->next = temp1;
    }

    if (temp2 != NULL) {
        ans->next = temp2;
    }

  return res->next;
}


int main() {
    // Allocate memory in link list in heap
    Node *h1 = NULL;

    h1 = insertAtHead(h1, 202);
    h1 = insertAtHead(h1, 99);
    h1 = insertAtHead(h1, 10);
    h1 = insertAtHead(h1, 6);
    h1 = insertAtHead(h1, 1);

    Node *h2 = NULL;

    h2 = insertAtHead(h2, 105);
    h2 = insertAtHead(h2, 102);
    h2 = insertAtHead(h2, 92);
    h2 = insertAtHead(h2, 48);
    h2 = insertAtHead(h2, 42);
    h2 = insertAtHead(h2, 8);
    h2 = insertAtHead(h2, 2);

  cout << "unsorted list!" << endl;
    LinkListTraversal(h1);
  cout << "\n" << endl;
    LinkListTraversal(h2);
  cout << "\n" << endl;
    Node * merged = merge(h1,h2);

    cout << "Sorted list:" << endl;
    LinkListTraversal(merged);




    return 0;
}
