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

Node *findMid(Node *head) {
  Node * slow = head;
  Node * fast = head->next;


  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

Node *insertAtHead(Node *head, int n) {
    Node *temp = new Node();
    temp->data = n;
    temp->next = head;
    head = temp;
    return head;
}

Node *merge(Node *left, Node *right) {
  Node * dummy = new Node();
  Node * temp = dummy;

  while(left != NULL && right != NULL){
    if(left->data < right-> data){
      temp->next = left;
      left = left->next;
    }else{
      temp->next = right;
      right = right -> next;
    }
    temp = temp->next;
  }

  if(left!=NULL){
    temp -> next = left;
  }else{
    temp -> next = right;
  }
  return dummy -> next;
}

Node *mergeSort(Node *head) {
  if(head == NULL || head->next == NULL){
    return head;
  }
  Node* mid = findMid(head);
  Node * left = head;
  Node * right = mid->next;
  mid->next = NULL;


  left = mergeSort(left);
  right = mergeSort(right);

  return merge(left,right);
}

int main() {
    // Allocate memory in link list in heap
    Node *h1 = NULL;

    h1 = insertAtHead(h1, 12);
    h1 = insertAtHead(h1, 66);
    h1 = insertAtHead(h1, 9);
    h1 = insertAtHead(h1, 99);
    h1 = insertAtHead(h1, 2);

    cout << "Unsorted list:" << endl;
    LinkListTraversal(h1);

    Node *sortedList = mergeSort(h1);
    cout << "\nSorted list:" << endl;
    LinkListTraversal(sortedList);


    return 0;
}
